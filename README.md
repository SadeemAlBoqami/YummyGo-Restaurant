# YummyGo-Restaurant: Smart Restaurant Ordering System
## General Idea:
   A smart restaurant based on the IoT that allows the customer to order from the restaurant through the restaurant's application in his mobile phone when a new order arrives for the cashier, the guard rings and the order items appear on the screen, in the meantime the customer waits in the restaurant without the need to stand at the cashier after preparing the order, pressing the cashier on a button, sending a signal to the application telling the customer that his order is ready and he must receive it.
- All this via Bluetooth connection supported by ESP32.
  
## Tools & Equipments:
        * Esp 32
        * Piezo buzzer
        * Push button
        * LCD screen (I2C 16*2)
        * Wires
        * Breadboard
        * MicroUSB wire
        * YummyGo Application (MIT App Inventor)
        
## How does it work?
You need an Aurduino IDE to run the code, and an account on the MIT APP Inventor website if you want to modify the phone app, in case you don't want to modify it, you can just install the app on your Android phone and the app will work perfectly.
1. Open the YummyGoCode.ino file in the Arduino IDE program on your computer
2. Connect the circuit as in the picture * * *
3. Connect the ESP32 part to your computer using a micro-USB cable
4. Run the code and wait for it to complete
5. Install the app on your Android phone and turn on the phone's Bluetooth
6. Open the app and tap on the "Bluetooth" menu. Your neighboring Bluetooth devices will appear, select "YummyGo Restaurant" to be paired with the restaurant's Bluetooth and be able to order. *Note: The connection status will show you the success/failure of the connection next to the menu.
7. After connecting correctly, select the items you want in your order and submit the order, you will see an order waiting message.
8. At the cashier, the guard will ring after receiving the order, and the items ordered will appear on the screen.
9. After the order is prepared and the cashier presses the button, you will receive a message in the app and the order waiting status will change to "Your order is ready for pickup".
