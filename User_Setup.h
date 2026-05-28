// --- CLEAN SLATE CYD ST7789 SETUP ---

#define USER_SETUP_INFO "ESP32 CYD ST7789 240x320"
#define USER_SETUP_ID 2432

// 1. The Screen Driver
#define ST7789_DRIVER

// 2. Color Settings (Forcing Inversion OFF)
#define TFT_INVERSION_OFF 
#define TFT_RGB_ORDER TFT_BGR

// 3. The Pins
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  -1   
#define TFT_BL   21
#define TFT_BACKLIGHT_ON HIGH

// 4. The Screen Size
#define TFT_WIDTH  240  
#define TFT_HEIGHT 320  

// 5. The Speeds
#define SPI_FREQUENCY       27000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY 2500000

// 6. The Fonts
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT