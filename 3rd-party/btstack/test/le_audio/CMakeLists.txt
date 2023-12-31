cmake_minimum_required (VERSION 3.12)
project(BTstack-LE-Audio)
set (CMAKE_CXX_STANDARD 11)

# fink pkgconfig
find_package(PkgConfig REQUIRED)

# libusb
pkg_check_modules(LIBUSB REQUIRED libusb-1.0)
include_directories(${LIBUSB_INCLUDE_DIRS})
link_directories(${LIBUSB_LIBRARY_DIRS})
link_libraries(${LIBUSB_LIBRARIES})

# portaudio
pkg_check_modules(PORTAUDIO portaudio-2.0)
if(PORTAUDIO_FOUND)
    include_directories(${PORTAUDIO_INCLUDE_DIRS})
    link_directories(${PORTAUDIO_LIBRARY_DIRS})
    link_libraries(${PORTAUDIO_LIBRARIES})
    add_compile_definitions(HAVE_PORTAUDIO)
endif()

# fdk-aac
pkg_check_modules(FDK_AAC fdk-aac)
if(FDK_AAC_FOUND)
	message("HAVE_AAC_FDK")
	include_directories(${FDK_AAC_INCLUDE_DIRS})
	link_directories(${FDK_AAC_LIBRARY_DIRS})
	link_libraries(${FDK_AAC_LIBRARIES})
	add_compile_definitions(HAVE_AAC_FDK)
endif()

# ldac encoder
pkg_check_modules(LDAC_ENCODER ldacBT-enc)
if (LDAC_ENCODER_FOUND)
	message("HAVE_LDAC_ENCODER")
    include_directories(${LDAC_ENCODER_INCLUDE_DIRS})
    link_directories(${LDAC_ENCODER_LIBRARY_DIRS})
    link_libraries(${LDAC_ENCODER_LIBRARIES})
	add_compile_definitions(HAVE_LDAC_ENCODER)
endif()

# ldac decoder
pkg_check_modules(LDAC_DECODER libldacdec)
if (LDAC_DECODER_FOUND)
    message("HAVE_LDAC_DECODER")
    include_directories(${LDAC_DECODER_INCLUDE_DIRS})
    link_directories(${LDAC_DECODER_LIBRARY_DIRS})
    link_libraries(${LDAC_DECODER_LIBRARIES})
    add_compile_definitions(HAVE_LDAC_DECODER)
endif()

# openaptx
pkg_check_modules(APTX libopenaptx)
if (APTX_FOUND)
    message("HAVE_APTX")
    include_directories(${APTX_INCLUDE_DIRS})
    link_directories(${APTX_LIBRARY_DIRS})
    link_libraries(${APTX_LIBRARIES})
    add_compile_definitions(HAVE_APTX)
endif()

# enable optional features
add_compile_definitions(ENABLE_TESTING_SUPPORT)

# to find generated .h from .gatt files
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# local dir for btstack_config.h after build dir to avoid using .h from Makefile
include_directories(.)

include_directories(../../3rd-party/micro-ecc)
include_directories(../../3rd-party/bluedroid/decoder/include)
include_directories(../../3rd-party/bluedroid/encoder/include)
include_directories(../../3rd-party/md5)
include_directories(../../3rd-party/hxcmod-player)
include_directories(../../3rd-party/hxcmod-player/mod)
include_directories(../../3rd-party/kissfft)
include_directories(../../3rd-party/liblc3codec/Api)
include_directories(../../3rd-party/liblc3codec/Common)
include_directories(../../3rd-party/liblc3codec/Common/KissFft)
include_directories(../../3rd-party/liblc3codec/Common/Tables)
include_directories(../../3rd-party/liblc3codec/TestSupport)
include_directories(../../3rd-party/lwip/core/src/include)
include_directories(../../3rd-party/lwip/dhcp-server)
include_directories(../../3rd-party/rijndael)
include_directories(../../3rd-party/yxml)
include_directories(../../3rd-party/tinydir)
include_directories(../../src)
include_directories(../../example)
include_directories(../../chipset/zephyr)
include_directories(../../platform/posix)
include_directories(../../platform/embedded)
include_directories(../../platform/lwip)
include_directories(../../platform/lwip/port)

file(GLOB SOURCES_SRC       "../../src/*.c" "../../src/*.cpp" "../../example/sco_demo_util.c")
file(GLOB SOURCES_BLE       "../../src/ble/*.c")
file(GLOB SOURCES_GATT      "../../src/ble/gatt-service/*.c")
file(GLOB SOURCES_CLASSIC   "../../src/classic/*.c")
file(GLOB SOURCES_MESH      "../../src/mesh/*.c")
file(GLOB SOURCES_MD5       "../../3rd-party/md5/md5.c")
file(GLOB SOURCES_UECC      "../../3rd-party/micro-ecc/uECC.c")
file(GLOB SOURCES_YXML      "../../3rd-party/yxml/yxml.c")
file(GLOB SOURCES_HXCMOD    "../../3rd-party/hxcmod-player/*.c"  "../../3rd-party/hxcmod-player/mods/*.c")
file(GLOB SOURCES_RIJNDAEL  "../../3rd-party/rijndael/rijndael.c")
file(GLOB SOURCES_POSIX     "../../platform/posix/*.c")
file(GLOB SOURCES_MAIN      "main.c")
file(GLOB SOURCES_ZEPHYR    "../../chipset/zephyr/*.c")

file(GLOB LC3_COMMON        "../../3rd-party/liblc3codec/Common/*.cpp")
file(GLOB LC3_TABLES        "../../3rd-party/liblc3codec/Common/Tables/*.cpp")
file(GLOB LC3_DECODER       "../../3rd-party/liblc3codec/Decoder/*.cpp")
file(GLOB LC3_ENCODER       "../../3rd-party/liblc3codec/Encoder/*.cpp")

set (SOURCES_LC3 ${LC3_COMMON} ${LC3_TABLES} ${LC3_DECODER} ${LC3_ENCODER} ${LC3_TESTSUPPORT})

file(GLOB SOURCES_BLE_OFF "../../src/ble/le_device_db_memory.c")
list(REMOVE_ITEM SOURCES_BLE   ${SOURCES_BLE_OFF})

file(GLOB SOURCES_POSIX_OFF "../../platform/posix/le_device_db_fs.c")
list(REMOVE_ITEM SOURCES_POSIX ${SOURCES_POSIX_OFF})

set(SOURCES 
	${SOURCES_MD5}
	${SOURCES_YXML}
	${SOURCES_LC3}
	${SOURCES_POSIX}
	${SOURCES_MAIN}
	${SOURCES_RIJNDAEL}
	${SOURCES_SRC}
	${SOURCES_BLE}
	${SOURCES_GATT}
	${SOURCES_MESH}
	${SOURCES_CLASSIC} 
	${SOURCES_UECC}
	${SOURCES_HXCMOD}
	${SOURCES_ZEPHYR}
)
list(SORT SOURCES)

# Enable ASAN
add_compile_options( -g -fsanitize=address)
add_link_options(       -fsanitize=address)

# create static lib
add_library(btstack STATIC ${SOURCES})

# create targets for all examples
file(GLOB EXAMPLES_C    "le_audio_*.c")
list(SORT EXAMPLES_C)
file(GLOB EXAMPLES_GATT "*.gatt")

# create targets
foreach(EXAMPLE_FILE ${EXAMPLES_C})
	get_filename_component(EXAMPLE ${EXAMPLE_FILE} NAME_WE)

	# add GATT DB creation
	if ( "${EXAMPLES_GATT}" MATCHES ${EXAMPLE} )
		message("LE Audio Tool: ${EXAMPLE} -- with GATT DB")
		add_custom_command(
		    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${EXAMPLE}.h
			DEPENDS ${CMAKE_SOURCE_DIR}/${EXAMPLE}.gatt
			COMMAND ${CMAKE_SOURCE_DIR}/../../tool/compile_gatt.py
			ARGS ${CMAKE_SOURCE_DIR}/${EXAMPLE}.gatt ${CMAKE_CURRENT_BINARY_DIR}/${EXAMPLE}.h
		)
		list(APPEND SOURCE_FILES ${CMAKE_CURRENT_BINARY_DIR}/${EXAMPLE}.h)
	else()
		message("LE Audio Tool: ${EXAMPLE}")
	endif()
	add_executable(${EXAMPLE} ${EXAMPLE_FILE} )
	target_link_libraries(${EXAMPLE} btstack)
endforeach(EXAMPLE_FILE)
