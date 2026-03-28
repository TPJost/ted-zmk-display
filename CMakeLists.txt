cmake_minimum_required(VERSION 3.20.0)

zephyr_library()

zephyr_library_sources(
    src/custom_status_screen.c
    src/widgets/status.c
    src/widgets/util.c
    src/widgets/bolt.c
)

zephyr_library_include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/widgets
    ${ZEPHYR_BASE}/../zmk/app/include
)
