Bobby-Pad is a 9 switches budget macro-keyboard with a great quality...


#PROJECT DETAILS ->
    1. PCB :- the pcb is based of RP2040 , the pcb has the basic structure of any RP2040 PCB 
              it contains a USB C recptable support , Along with it it contains a Rotary Encoder 
	      switch and a 2.3cm OLED. 
    2. FIRMWARE :- Since RP2040 doesen't support QMK so I am builduing a custom FIRMWARE with Rust(will update it soon)
    3. CASE & PLATE :- For the Case and plate I am planning for alimunium to give it a weight , the design still under process

# ROAD MAP ->
  
  -> First commit the V1 with STM32 [ 05/22] { STM32 doesnt fit into the budget}
  -> Second change V2 with RP2040 [06/22] {Had issue with position and connections}
  -> Third change V3 with RP2040 [06/22]  { 0 errors }

#My thoughts ->
 * I built the Version 1 without knowing much about its price but when I knew that I was shocked so I switched to RP2040 which was not 
   that difficult to adapt as it has a good datasheet and guide provided in its official website , but this mcu is not much supported by 
   the keyboard community still I feel comfortable to use this one . I ordered a Raberry Pi PICO for dry run and testing the firmware code 
   before putting it to the PCBs (Might upload pics of it). 

#BUDGET -> 
 
 * PCB build + Bottom Assembly : 44$ FOR 5 PCB (i.e. Rs. 3,432) 
 * SWITCHES (Cherry MX RGB blue) : 26$ FOR 50 switches (i.e. Rs.2,025)
 * Rotary encoder + oled :  8$ - 9$  per keeb :- total 40$ - 45$ for 5 keeb
 * Case & plate : --

  #CURRENT TOTAL FOR EACH KEYBOARD (NO PLATE &  CASE) : 24$ build cost 
#TO-DO ->
 [X] PCB design
 [x] PCB Test
 [ ] Firmware test/build 
 [ ] Case and plate design 
 [ ] Final test

* All the pcb related files are uploaded

© 2022 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About

