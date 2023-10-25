#!/usr/bin/env python3
#
# Generate preferences for a "No Reassembly" profile.
# By Gerald Combs <gerald@wireshark.org>
#
# SPDX-License-Identifier: GPL-2.0-or-later
#
'''Generate preferences for a "No Reassembly" profile.'''

import argparse
import os.path
import re
import subprocess
import sys

MIN_PLUGINS = 10

def main():
    parser = argparse.ArgumentParser(description='No reassembly profile generator')
    parser.add_argument('-p', '--program-path', default=os.path.curdir, help='Path to TShark.')
    parser.add_argument('-v', '--verbose', action='store_const', const=True, default=False, help='Verbose output.')
    args = parser.parse_args()

    this_dir = os.path.dirname(__file__)
    profile_path = os.path.join(this_dir, '..', 'profiles', 'No Reassembly', 'preferences')

    tshark_path = os.path.join(args.program_path, 'tshark')
    if not os.path.isfile(tshark_path):
        print('tshark not found at {}\n'.format(tshark_path))
        parser.print_usage()
        sys.exit(1)

    # Make sure plugin prefs are present.
    cp = subprocess.run([tshark_path, '-G', 'plugins'], stdout=subprocess.PIPE, check=True, encoding='utf-8')
    plugin_lines = cp.stdout.splitlines()
    dissector_count = len(tuple(filter(lambda p: re.search('\sdissector\s', p), plugin_lines)))
    if dissector_count < MIN_PLUGINS:
        print('Found {} plugins but require {}.'.format(dissector_count, MIN_PLUGINS))
        sys.exit(1)

    rd_pref_re = re.compile('^#\s*(.*(reassembl|desegment)\S*):\s*TRUE')
    out_prefs = [
        '# Generated by ' + os.path.basename(__file__), '',
        '####### Protocols ########', '',
    ]
    cp = subprocess.run([tshark_path, '-G', 'defaultprefs'], stdout=subprocess.PIPE, check=True, encoding='utf-8')
    pref_lines = cp.stdout.splitlines()
    for pref_line in pref_lines:
        m = rd_pref_re.search(pref_line)
        if m:
            rd_pref = m.group(1) + ': FALSE'
            if args.verbose is True:
                print(rd_pref)
            out_prefs.append(rd_pref)

    if len(pref_lines) < 5000:
        print("Too few preference lines.")
        sys.exit(1)

    if len(out_prefs) < 150:
        print("Too few changed preferences.")
        sys.exit(1)

    with open(profile_path, 'w') as profile_f:
        for pref_line in out_prefs:
            profile_f.write(pref_line + '\n')

if __name__ == '__main__':
    main()