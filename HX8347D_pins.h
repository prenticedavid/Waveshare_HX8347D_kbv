#ifndef HX8347D_PINS_H_ 
#define HX8347D_PINS_H_

// macros for the Waveshare Shield pins

#if 0
#elif defined(__AVR_ATmega2560__)
#define __LCD_CS_DDR      DDRB
#define __LCD_CS_PORT     PORTB
#define __LCD_CS_PIN      4
#define __LCD_DC_DDR      DDRH
#define __LCD_DC_PORT     PORTH
#define __LCD_DC_PIN      4
#define __LCD_BKL_DDR     DDRH
#define __LCD_BKL_PORT    PORTH
#define __LCD_BKL_PIN     6
#define __SD_CS_DDR      DDRE
#define __SD_CS_PORT     PORTE
#define __SD_CS_PIN      3
#define __XPT_CS_DDR     DDRG
#define __XPT_CS_PORT    PORTG
#define __XPT_CS_PIN     5
#define __XPT_IRQ_DDR     DDRE
#define __XPT_IRQ_PORT    PORTE
#define __XPT_IRQ_PINR    PINE
#define __XPT_IRQ_PIN     5
#elif defined(__AVR_ATmega32U4__)
#define __LCD_CS_DDR      DDRB
#define __LCD_CS_PORT     PORTB
#define __LCD_CS_PIN      6
#define __LCD_DC_DDR      DDRE
#define __LCD_DC_PORT     PORTE
#define __LCD_DC_PIN      6
#define __LCD_BKL_DDR     DDRB
#define __LCD_BKL_PORT    PORTB
#define __LCD_BKL_PIN     5
#define __SD_CS_DDR      DDRC
#define __SD_CS_PORT     PORTC
#define __SD_CS_PIN      6
#define __XPT_CS_DDR     DDRD
#define __XPT_CS_PORT    PORTD
#define __XPT_CS_PIN     4
#define __XPT_IRQ_DDR     DDRD
#define __XPT_IRQ_PORT    PORTD
#define __XPT_IRQ_PINR    PIND
#define __XPT_IRQ_PIN     0
#elif defined(__AVR_ATmega328P__)
#define __LCD_CS_DDR      DDRB
#define __LCD_CS_PORT     PORTB
#define __LCD_CS_PIN      2
#define __LCD_DC_DDR      DDRD
#define __LCD_DC_PORT     PORTD
#define __LCD_DC_PIN      7
#define __LCD_BKL_DDR     DDRB
#define __LCD_BKL_PORT    PORTB
#define __LCD_BKL_PIN     1
#define __SD_CS_DDR      DDRD
#define __SD_CS_PORT     PORTD
#define __SD_CS_PIN      5
#define __XPT_CS_DDR     DDRD
#define __XPT_CS_PORT    PORTD
#define __XPT_CS_PIN     4
#define __XPT_IRQ_DDR     DDRD
#define __XPT_IRQ_PORT    PORTD
#define __XPT_IRQ_PINR    PIND
#define __XPT_IRQ_PIN    3
#else
#error
#endif

#define __LCD_CS_OUT()    __LCD_CS_DDR |= (1<<__LCD_CS_PIN)
#define __LCD_CS_CLR()    __LCD_CS_PORT &=~ (1<<__LCD_CS_PIN)
#define __LCD_CS_SET()    __LCD_CS_PORT |=  (1<<__LCD_CS_PIN)

#define __LCD_DC_OUT()    __LCD_DC_DDR |= (1<<__LCD_DC_PIN)
#define __LCD_DC_CLR()    __LCD_DC_PORT &=~ (1<<__LCD_DC_PIN)
#define __LCD_DC_SET()    __LCD_DC_PORT |=  (1<<__LCD_DC_PIN)

#define __LCD_BKL_OUT()   __LCD_BKL_DDR |= (1<<__LCD_BKL_PIN)
#define __LCD_BKL_OFF()   __LCD_BKL_PORT &=~ (1<<__LCD_BKL_PIN)
#define __LCD_BKL_ON()    __LCD_BKL_PORT |=  (1<<__LCD_BKL_PIN)

#define __SD_CS_OUT()    __SD_CS_DDR |= (1<<__SD_CS_PIN)
#define __SD_CS_CLR()    __SD_CS_PORT &=~ (1<<__SD_CS_PIN)
#define __SD_CS_SET()    __SD_CS_PORT |=  (1<<__SD_CS_PIN)

#define __SD_CS_DISABLE()       { __SD_CS_OUT(); __SD_CS_SET(); }

#define __XPT2046_CS_OUT()    __XPT_CS_DDR |= (1<<__XPT_CS_PIN)
#define __XPT2046_CS_CLR()    __XPT_CS_PORT &=~ (1<<__XPT_CS_PIN)
#define __XPT2046_CS_SET()    __XPT_CS_PORT |=  (1<<__XPT_CS_PIN)
#define __XPT2046_IRQ_INP()    __XPT_IRQ_DDR &= ~(1<<__XPT_IRQ_PIN)
#define __XPT2046_IRQ_CLR()    __XPT_IRQ_PORT &=~ (1<<__XPT_IRQ_PIN)
#define __XPT2046_IRQ_SET()    __XPT_IRQ_PORT |=  (1<<__XPT_IRQ_PIN)

#define __XPT2046_IRQ_IN()      {__XPT2046_IRQ_INP();__XPT2046_IRQ_SET(); }
#define __XPT2046_IRQ_READ()    (__XPT_IRQ_PINR & (1<<__XPT_IRQ_PIN))

#define __XPT2046_CS_DISABLE()   { __XPT2046_CS_OUT(); __XPT2046_CS_SET(); }

#endif
