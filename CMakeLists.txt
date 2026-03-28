cmake_minimum_required(VERSION 3.20.0)

zephyr_library()

zephyr_library_sources(
    src/custom_status_screen.c
    src/widgets/bolt.c
    src/widgets/util.c
)

if(NOT CONFIG_ZMK_SPLIT OR CONFIG_ZMK_SPLIT_ROLE_CENTRAL)
    zephyr_library_sources(
        src/widgets/status.c
    )
else()
    zephyr_library_sources(
        src/widgets/art.c
        src/widgets/peripheral_status.c
    )
endif()

zephyr_library_include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/widgets
    ${ZEPHYR_BASE}/../zmk/app/include
)
