#pragma once

#include "esp_err.h"

#ifdef __cplusplus
extern "C" {
#endif

esp_err_t mqtt_bridge_start(const char *binding_token);

#ifdef __cplusplus
}
#endif
