# Smart Medicine Reminder Box 💊

An Arduino-based smart medicine dispenser that reminds patients to take medicine on time and opens automatically.

---

## ✨ Features
* **RTC Timekeeping:** Keeps track of exact time using DS3231 RTC.
* **Alert System:** Buzzer sounds and Red LED blinks when it's time for medicine.
* **Touchless Opening:** Ultrasonic sensor detects a hand within 10 cm and opens the box via 2 Servos.
* **IR Detection:** Monitors compartment access.
* **Confirmation Button:** A push button stops the alert, closes the box, and turns on a Green LED for 3 seconds.
* **LCD Display:** Shows current time and instructions.

---

## 🛠️ Components
* Arduino Uno
* DS3231 RTC Module
* 16x2 I2C LCD Display
* 2x SG90 Micro Servos
* 1x HC-SR04 Ultrasonic Sensor
* 2x IR Sensors
* 1x Buzzer, 1x Push Button
* LEDs (1x Red, 1x Green)

---

## 📌 Wiring / Pinout

| Component | Pin | Arduino Uno |
| :--- | :--- | :---: |
| **RTC & LCD** | SDA / SCL | A4 / A5 |
| **Ultrasonic** | Trig / Echo | Pin 8 / Pin 7 |
| **Servos** | Servo 1 / Servo 2 | Pin 9 / Pin 6 |
| **Buzzer** | (+) | Pin 10 |
| **LEDs** | Red / Green | Pin 12 / Pin 11 |
| **Push Button** | Input | Pin 2 |
| **IR Sensors** | Sensor 1 / Sensor 2 | Pin 3 / Pin 4 |

---

## 🚀 How to Run

### Step 1: Clone the Repo
```bash
git clone [https://github.com/Shaimun17/Smart-Medicine-Reminder-Box.git](https://github.com/Shaimun17/Smart-Medicine-Reminder-Box.git)
cd Smart-Medicine-Reminder-Box

```

### Step 2: Install Libraries

Open **Arduino IDE** > **Sketch** > **Include Library** > **Manage Libraries...** and install:

* `RTClib` (by Adafruit)
* `LiquidCrystal_I2C` (by Frank de Brabander)

### Step 3: Set Alarm Time

Open `Smart_Medicine_Box.ino` and update your reminder time:

```cpp
const int MEDICINE_HOUR = 14;
const int MEDICINE_MINUTE = 27;

```

### Step 4: Upload Code

1. Connect Arduino Uno to your PC via USB.
2. Select **Tools > Board > Arduino Uno**.
3. Select your **Port** under **Tools > Port**.
4. Click **Upload** (arrow icon).

---

