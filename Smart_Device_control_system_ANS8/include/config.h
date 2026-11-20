#pragma once

// ─────────────────────────────────────────
//  WiFi
// ─────────────────────────────────────────
#define WIFI_SSID       "Jet"
#define WIFI_PASSWORD   "12345678"

// ─────────────────────────────────────────
//  MQTT Broker (EMQX Public)
// ─────────────────────────────────────────
#define MQTT_BROKER     "broker.emqx.io"
#define MQTT_PORT       1883
#define MQTT_CLIENT_ID  "esp32_iot_001"   // เปลี่ยนถ้ามีหลายบอร์ด
#define MQTT_USER       ""
#define MQTT_PASS       ""

// ─────────────────────────────────────────
//  MQTT Topics — Publish
// ─────────────────────────────────────────
#define TOPIC_TEMP          "sensors/dht/temperature"
#define TOPIC_HUMID         "sensors/dht/humidity"
#define TOPIC_LIGHT         "sensors/light/lux"
#define TOPIC_CO2           "sensors/air/co2"
#define TOPIC_SOIL          "sensors/soil/moisture"
#define TOPIC_RAIN_PCT      "sensors/rain/intensity"
#define TOPIC_RAIN_DIG      "sensors/rain/detected"
#define TOPIC_STATUS        "sensors/device/status"
#define TOPIC_FLOOD_ALERT   "sensors/alert/flood_risk"

// ─────────────────────────────────────────
//  MQTT Topics — Subscribe (รับคำสั่ง)
// ─────────────────────────────────────────
#define TOPIC_CMD_LIGHT     "control/light"
#define TOPIC_CMD_FAN       "control/fan"

// ─────────────────────────────────────────
//  Pin Definitions
// ─────────────────────────────────────────

#define PIN_DHT         23       // DHT22 Data
#define PIN_SDA         21      // I2C SDA → BH1750
#define PIN_SCL         22      // I2C SCL → BH1750

#define PIN_MQ135       34      // MQ135  Analog (ADC1)
#define PIN_RAIN_AO     35      // Rain   Analog (ADC1)
#define PIN_RAIN_DO     5      // Rain   Digital

#define PIN_SOIL        35      // Soil   Analog (ADC1)
#define PIN_LED_LIGHT   16      // LED / Relay ไฟห้อง 16 แต่ใช้ 2 เพื่อทดสอบ
#define PIN_LED_FAN     27      // LED / Relay พัดลม
  
// ─────────────────────────────────────────
//  Sensor Config
// ─────────────────────────────────────────
#define DHT_TYPE DHT22
#define PUBLISH_INTERVAL_MS 2000    // ส่งข้อมูลทุก 3 วินาที

#define MQ135_RL    10.0f
#define MQ135_RO    76.63f
#define MQ135_A     110.47f
#define MQ135_B     -2.862f
#define RAIN_DRY    4000    // ADC ตอนแผ่นแห้ง
#define RAIN_WET    500     // ADC ตอนมีน้ำ
#define RAIN_THRESHOLD_PCT  20.0f   // %ขึ้นไปถือว่าฝนตก

#define SOIL_DRY    3200    // ADC ตอนดินแห้ง
#define SOIL_WET    1200    // ADC ตอนดินเปียก