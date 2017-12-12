#include "mgos.h"
#include "esp_log.h"

#include "btstack.h"

enum mgos_app_init_result mgos_app_init(void) {
  ESP_LOGI("App", "mgos_app_init");
  return MGOS_APP_INIT_SUCCESS;
}
