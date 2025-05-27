#pragma once
#include "esphome/components/sensor/sensor.h"
// Do not include polling_component.h

namespace esphome {
    namespace uptime {

        class HpUpTimeConnectionSensor : public sensor::Sensor {
        public:
            void update();
            std::string unique_id();
            void dump_config();

            void start();           // connection established
            void stop();            // connection lost
        protected:
            bool connected_{ false };
        };
    }  // namespace uptime
}  // namespace esphome
