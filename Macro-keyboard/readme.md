This Project is to build a Macro-Keyboard having 9 switches .

# The aim of the Project is -
  1. to build good quality keyboard Under 800
  2. Add features like Sound detection , USB hub etc.
  3. Make them easy to Proggram .


# ROADMAP --  
  -- [x] Layout
  -- [ ] Case and plate
  -- [X] PCB design
  -- [ ] Firmware

# Stages of the project --
-- [  ] Budget Planning
 -- [ ] Prototype Build
 -- [ ] Prototype Verified 
 -- [ ] Design Revision of final result
 -- [ ] Round 2 protype 
 -- [ ] Round 2 protype Verified
 -- [ ] Round 2 prototype Revision
 -- [ ] Launch


 # Parts Listed till now --
   # PCB COMPONENETS --
     1. 9xcherry mx , Size - 1 u (each) -> https://www.cherrymx.de/_Resources/Persistent/a/5/3/1/a531cb6598bc849cbcf131fd7a31814282b74545/EN_CHERRY_MX_BLUE.pdf (DATASHEET)

     2. LED_WS2812B , Dimensions - 1mm x 1mm 

     3. USB_A_Stewart_SS-52100-001_Horizontal x 3 -> https://belfuse.com/resources/datasheets/stewartconnector/ds-stw-usb-2.0-and-3.0-connectors.pdf (DATASHEET)

    4. USB_C_Receptacle_Amphenol x 1 

    5.RotaryEncoder(LM1117-3.3)

    6. Oled screen

    7. Audio Jack 3.5 mm

    8.SX1509BIULTRT (IO expander)

    9. STM32 (microcontroller)

    10. LM386-1(in the sound detection circuit)


# I am not mentioning the resistors and capacitors used here :) 





# PROJECT TIMELINE -- 
  
  1. 28-05-2022 : Completed with the base design of the keyboard , Having 9 cherry mx keys w/Led . it also has other features -- a roatary Encoder
                 A OLED deisplay , A usb Hub , A audio jack . The system is controlled using STM32(F103C8Tx)

                 
    # The Budget is not finalized yet but as per my rough calculations I will  spen 40% - 50% in the Case and plate manufacture and 25 % on PCB and 25 % on extra components


# I am also trying to make a Wireless version of it , will update soon once its done.