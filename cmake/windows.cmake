set(COMMON_COMPILER_FLAGS "${COMMON_COMPILER_FLAGS} -Wno-deprecated-declarations -fstack-protector-all")
set(ARCH_SUFFIX "")

set(USE_SDL     ON)
set(USE_OPENGL  ON)
set(USE_LOADGL  ON)
set(USE_GFX     ON)
set(USE_VORBIS  ON)
set(USE_WEBM    ON)
set(USE_PTHREAD ON)

set(ENABLE_STATIC     ON)
set(ENABLE_STATIC_SDL ON)

add_definitions(-DWIN)

if(CMAKE_SYSTEM_NAME MATCHES "Windows")
  if(NOT CMAKE_PREFIX_PATH)
    set(CMAKE_PREFIX_PATH "c:/mingw")
  endif()
  if(NOT CMAKE_LIBRARY_PATH)
    set(CMAKE_LIBRARY_PATH "${CMAKE_PREFIX_PATH}/lib")
  endif()
endif()

if(TARGET_ARCH MATCHES "arm64")
  set(ARCH_SUFFIX "-arm64")
  add_definitions(-DELF)
elseif(TARGET_ARCH MATCHES "64")
  set(ARCH_SUFFIX "-x64")
  add_definitions(-DELF -DAMD64)
elseif(TARGET_ARCH MATCHES "86")
  set(ARCH_SUFFIX "-x86")
  add_definitions(-DELF)
  set(BUILD_MMX ON)
else()
  message(NOTICE "Supported TARGET_ARCH=[X86|AMD64]")
  message(FATAL_ERROR "Unsupported Docker Architecture")
endif()
