cmake_minimum_required(VERSION 3.20.0)

zephyr_library()

zephyr_library_sources(
    src/custom_status_screen.c
    src/widgets/status.c
    src/widgets/util.c
    src/widgets/bolt.c
)
