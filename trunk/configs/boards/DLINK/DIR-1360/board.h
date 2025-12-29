/* Xiaomi Mi R3G */

#define BOARD_PID		"DIR-1360"
#define BOARD_NAME		"DIR-1360"
#define BOARD_DESC		"DIR-1360 Wireless Router"
#define BOARD_VENDOR_NAME	"D-Link"
#define BOARD_VENDOR_URL	"http://www.dlink.com/"
#define BOARD_MODEL_URL		"http://www.dlink.com/DIR-1360"
#define BOARD_BOOT_TIME		30
#define BOARD_FLASH_TIME	120
#define BOARD_GPIO_BTN_RESET	8
#define  BOARD_GPIO_BTN_WPS      18
#undef  BOARD_GPIO_LED_ALL      
#define  BOARD_GPIO_LED_WIFI     4
#define BOARD_GPIO_LED_POWER	14	/* 6: red, 10: yellow, 8: blue */
#undef BOARD_GPIO_LED_LAN
#define  BOARD_GPIO_LED_WAN  16
#define BOARD_GPIO_LED_USB	10
#undef  BOARD_GPIO_LED_ROUTER
#define BOARD_GPIO_PWR_USB_ON	1	/* 1: 5V Power ON, 0: 5V Power OFF */
#define BOARD_GPIO_PWR_USB	10	/* USB2.0 5V Power */

#define BOARD_NUM_ETH_LEDS	1
#define BOARD_NUM_ETH_EPHY	4
#define BOARD_HAS_EPHY_L1000	1
#define BOARD_HAS_EPHY_W1000	1
#define BOARD_NUM_UPHY_USB3	1


#define BOARD_NUM_ANT_5G_TX	2
#define BOARD_NUM_ANT_5G_RX	2
#define BOARD_NUM_ANT_2G_TX	2
#define BOARD_NUM_ANT_2G_RX	2
#define BOARD_HAS_5G_11AC	1
