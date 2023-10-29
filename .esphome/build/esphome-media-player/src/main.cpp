// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace time;
using namespace binary_sensor;
using namespace display;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
preferences::IntervalSyncer *preferences_intervalsyncer;
homeassistant::HomeassistantTime *homeassistant_time;
esp32_touch::ESP32TouchComponent *esp32_touch_esp32touchcomponent;
esp32_touch::ESP32TouchBinarySensor *start_counter;
binary_sensor::DelayedOnFilter *binary_sensor_delayedonfilter;
homeassistant::HomeassistantSensor *feelLiketemperature;
homeassistant::HomeassistantSensor *forecasttemperature;
tm1637::TM1637Display *tm1637_tm1637display;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_2;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  //   {}
  // esphome:
  //   name: esphome-media-player
  //   friendly_name: MadiaPlayer
  //   build_path: .esphome/build/esphome-media-player
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  //   min_version: 2023.4.1
  App.pre_setup("esphome-media-player", "MadiaPlayer", "", __DATE__ ", " __TIME__, false);
  // time:
  // binary_sensor:
  // display:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512);
  logger_logger->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  web_server_base_webserverbase->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  captive_portal_captiveportal->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   ap:
  //     ssid: Esphome-Web-Ca6934
  //     password: 3yiaOtmLckNp
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   networks:
  //   - ssid: Tenda_16EF40
  //     password: '1234567890'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: esphome-media-player.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("esphome-media-player.local");
  {
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("Tenda_16EF40");
  wifi_wifiap_2.set_password("1234567890");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  }
  {
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Esphome-Web-Ca6934");
  wifi_wifiap.set_password("3yiaOtmLckNp");
  wifi_wificomponent->set_ap(wifi_wifiap);
  }
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  //   services: []
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  // ota:
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 3232
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   encryption:
  //     key: VdYFcBK7U6asCylpGancIfuNSNI9mcSukauTN7WuR1g=
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  api_apiserver->set_noise_psk({85, 214, 5, 112, 18, 187, 83, 166, 172, 11, 41, 105, 25, 169, 220, 33, 251, 141, 72, 210, 61, 153, 196, 174, 145, 171, 147, 55, 181, 174, 71, 88});
  // sensor:
  // esp32:
  //   board: nodemcu-32s
  //   framework:
  //     version: 2.0.5
  //     source: ~3.20005.0
  //     platform_version: platformio/espressif32 @ 5.3.0
  //     type: arduino
  //   variant: ESP32
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // time.homeassistant:
  //   platform: homeassistant
  //   id: homeassistant_time
  //   timezone: EET-2EEST,M3.5.0/3,M10.5.0/4
  //   update_interval: 15min
  homeassistant_time = new homeassistant::HomeassistantTime();
  homeassistant_time->set_timezone("EET-2EEST,M3.5.0/3,M10.5.0/4");
  homeassistant_time->set_update_interval(900000);
  homeassistant_time->set_component_source("homeassistant.time");
  App.register_component(homeassistant_time);
  // esp32_touch:
  //   id: esp32_touch_esp32touchcomponent
  //   setup_mode: false
  //   iir_filter: 0ms
  //   sleep_duration: 27306us
  //   measurement_duration: 8192us
  //   low_voltage_reference: 0.5V
  //   high_voltage_reference: 2.7V
  //   voltage_attenuation: 0V
  esp32_touch_esp32touchcomponent = new esp32_touch::ESP32TouchComponent();
  esp32_touch_esp32touchcomponent->set_component_source("esp32_touch");
  App.register_component(esp32_touch_esp32touchcomponent);
  esp32_touch_esp32touchcomponent->set_setup_mode(false);
  esp32_touch_esp32touchcomponent->set_iir_filter(0);
  esp32_touch_esp32touchcomponent->set_sleep_duration(4096);
  esp32_touch_esp32touchcomponent->set_measurement_duration(65535);
  esp32_touch_esp32touchcomponent->set_low_voltage_reference(TOUCH_LVOLT_0V5);
  esp32_touch_esp32touchcomponent->set_high_voltage_reference(TOUCH_HVOLT_2V7);
  esp32_touch_esp32touchcomponent->set_voltage_attenuation(TOUCH_HVOLT_ATTEN_0V);
  // binary_sensor.esp32_touch:
  //   platform: esp32_touch
  //   name: start timer
  //   id: start_counter
  //   pin: 27
  //   threshold: 1000
  //   filters:
  //   - delayed_on: 200ms
  //     type_id: binary_sensor_delayedonfilter
  //   disabled_by_default: false
  //   esp32_touch_id: esp32_touch_esp32touchcomponent
  //   wakeup_threshold: 0
  start_counter = new esp32_touch::ESP32TouchBinarySensor(TOUCH_PAD_NUM7, 1000, 0);
  App.register_binary_sensor(start_counter);
  start_counter->set_name("start timer");
  start_counter->set_object_id("start_timer");
  start_counter->set_disabled_by_default(false);
  binary_sensor_delayedonfilter = new binary_sensor::DelayedOnFilter(200);
  binary_sensor_delayedonfilter->set_component_source("binary_sensor");
  App.register_component(binary_sensor_delayedonfilter);
  start_counter->add_filters({binary_sensor_delayedonfilter});
  esp32_touch_esp32touchcomponent->register_touch_pad(start_counter);
  // sensor.homeassistant:
  //   platform: homeassistant
  //   id: feelLiketemperature
  //   entity_id: sensor.openweathermap_feels_like_temperature
  //   internal: true
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  //   name: feelLiketemperature
  feelLiketemperature = new homeassistant::HomeassistantSensor();
  App.register_sensor(feelLiketemperature);
  feelLiketemperature->set_name("feelLiketemperature");
  feelLiketemperature->set_object_id("feelliketemperature");
  feelLiketemperature->set_disabled_by_default(false);
  feelLiketemperature->set_internal(true);
  feelLiketemperature->set_accuracy_decimals(1);
  feelLiketemperature->set_force_update(false);
  feelLiketemperature->set_component_source("homeassistant.sensor");
  App.register_component(feelLiketemperature);
  feelLiketemperature->set_entity_id("sensor.openweathermap_feels_like_temperature");
  // sensor.homeassistant:
  //   platform: homeassistant
  //   id: forecasttemperature
  //   entity_id: sensor.openweathermap_forecast_temperature
  //   internal: true
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 1
  //   name: forecasttemperature
  forecasttemperature = new homeassistant::HomeassistantSensor();
  App.register_sensor(forecasttemperature);
  forecasttemperature->set_name("forecasttemperature");
  forecasttemperature->set_object_id("forecasttemperature");
  forecasttemperature->set_disabled_by_default(false);
  forecasttemperature->set_internal(true);
  forecasttemperature->set_accuracy_decimals(1);
  forecasttemperature->set_force_update(false);
  forecasttemperature->set_component_source("homeassistant.sensor");
  App.register_component(forecasttemperature);
  forecasttemperature->set_entity_id("sensor.openweathermap_forecast_temperature");
  // display.tm1637:
  //   platform: tm1637
  //   clk_pin:
  //     number: 22
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esp32_esp32internalgpiopin
  //     drive_strength: 20.0
  //   dio_pin:
  //     number: 23
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esp32_esp32internalgpiopin_2
  //     drive_strength: 20.0
  //   update_interval: 1000ms
  //   lambda: !lambda "static int i = 0;\nstatic int initcounter = 0;\nstatic bool autostarttime
  //     \ = false;\nstatic bool sstart = false;\nstatic int timeframe = 18;\n\ninitcounter++;\n
  //     if ( initcounter <60 and !sstart ) {it.printf(0, \"LOAd\");}\nif ( initcounter >
  //     \ 60 \n     and initcounter < 360\n     and !sstart\n   )   \n   {autostarttime
  //     \ = true; i = 610;}\nif ( initcounter > 20000) {initcounter = 100;}\n\nif (sstart
  //     \ and id(start_counter).state)\n{ i = 0; }\nelse if (id(start_counter).state)\n
  //     { sstart = true; }\n\nif (sstart or autostarttime)\n{\n  initcounter = 361;\n  i++;\n
  //     \  if (i <600)\n  { it.printf(1, \"%u.%02d\", i/60, i%60); }\n  else if (i == 600)
  //     \ {}\n  else if (i > 600)\n  {\n       Print feelLiketemperature temperature (from
  //     \ homeassistant sensor)\n    if ( \n             (i % timeframe == 0 or (i-1) %
  //     \ timeframe ==0 )\n         and id(feelLiketemperature).has_state()\n       )\n
  //     \    {\n        it.printf(0, \"%.f\", id(feelLiketemperature).state); \n       
  //     \ it.printf(3, \"C\"); \n    }\n       Print forecasttemperature temperature (from
  //     \ homeassistant sensor)\n    else if ( \n                 ((i-2) % timeframe ==
  //     \ 0 or (i-3) % timeframe == 0 )\n             and id(forecasttemperature).has_state()\n
  //     \            )\n    {\n        if (id(forecasttemperature).state > -10)\n      
  //     \  {\n          it.printf(0, \"F \"); \n          it.printf(2, \"%.f\", id(forecasttemperature).state);
  //     \ \n        }\n        else \n        {\n          it.printf(0, \"F\"); \n     
  //     \     it.printf(1, \"%.f\", id(forecasttemperature).state); \n        }\n    } 
  //     \      \n    else if ((i % 2) == 0)\n      it.strftime(\"%H.%M\", id(homeassistant_time).now());\n
  //     \    else\n      it.strftime(\"%H%M\", id(homeassistant_time).now());\n  }\n  \n
  //     \  if (i>15000){i=610;}\n    \n}"
  //   id: tm1637_tm1637display
  //   intensity: 7
  //   inverted: false
  //   length: 6
  tm1637_tm1637display = new tm1637::TM1637Display();
  tm1637_tm1637display->set_update_interval(1000);
  tm1637_tm1637display->set_component_source("tm1637.display");
  App.register_component(tm1637_tm1637display);
  esp32_esp32internalgpiopin = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin->set_pin(::GPIO_NUM_22);
  esp32_esp32internalgpiopin->set_inverted(false);
  esp32_esp32internalgpiopin->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  tm1637_tm1637display->set_clk_pin(esp32_esp32internalgpiopin);
  esp32_esp32internalgpiopin_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_2->set_pin(::GPIO_NUM_23);
  esp32_esp32internalgpiopin_2->set_inverted(false);
  esp32_esp32internalgpiopin_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  tm1637_tm1637display->set_dio_pin(esp32_esp32internalgpiopin_2);
  tm1637_tm1637display->set_intensity(7);
  tm1637_tm1637display->set_inverted(false);
  tm1637_tm1637display->set_length(6);
  tm1637_tm1637display->set_writer([=](tm1637::TM1637Display & it) -> void {
      #line 76 "mp1.yaml"
      static int i = 0;
      static int initcounter = 0;
      static bool autostarttime = false;
      static bool sstart = false;
      static int timeframe = 18;
      
      initcounter++;
      if ( initcounter <60 and !sstart ) {it.printf(0, "LOAd");}
      if ( initcounter > 60 
           and initcounter < 360
           and !sstart
         )   
         {autostarttime = true; i = 610;}
      if ( initcounter > 20000) {initcounter = 100;}
      
      if (sstart and start_counter->state)
      { i = 0; }
      else if (start_counter->state)
      { sstart = true; }
      
      if (sstart or autostarttime)
      {
        initcounter = 361;
        i++;
        if (i <600)
        { it.printf(1, "%u.%02d", i/60, i%60); }
        else if (i == 600) {}
        else if (i > 600)
        {
             
          if ( 
                   (i % timeframe == 0 or (i-1) % timeframe ==0 )
               and feelLiketemperature->has_state()
             )
          {
              it.printf(0, "%.f", feelLiketemperature->state); 
              it.printf(3, "C"); 
          }
             
          else if ( 
                       ((i-2) % timeframe == 0 or (i-3) % timeframe == 0 )
                   and forecasttemperature->has_state()
                  )
          {
              if (forecasttemperature->state > -10)
              {
                it.printf(0, "F "); 
                it.printf(2, "%.f", forecasttemperature->state); 
              }
              else 
              {
                it.printf(0, "F"); 
                it.printf(1, "%.f", forecasttemperature->state); 
              }
          }       
          else if ((i % 2) == 0)
            it.strftime("%H.%M", homeassistant_time->now());
          else
            it.strftime("%H%M", homeassistant_time->now());
        }
        
        if (i>15000){i=610;}
          
      }
  });
  // socket:
  //   implementation: bsd_sockets
  // network:
  //   {}
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
