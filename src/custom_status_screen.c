/*
 * Ted ZMK display module
 */

#include <zephyr/init.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(zmk_vfx_ted_display, LOG_LEVEL_INF);

/* Init function to verify module integration */
static int zmk_vfx_ted_display_init(void)
{
    LOG_INF("Ted display module loaded");
    return 0;
}

/* Register module init during application startup */
SYS_INIT(zmk_vfx_ted_display_init, APPLICATION, 90);
