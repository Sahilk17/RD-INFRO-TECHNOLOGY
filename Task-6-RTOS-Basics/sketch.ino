void Task1(void *pvParameters) {
  while (true) {
    Serial.println("Task 1 Running");
    vTaskDelay(1000 / portTICK_PERIOD_MS);
  }
}

void Task2(void *pvParameters) {
  while (true) {
    Serial.println("Task 2 Running");
    vTaskDelay(500 / portTICK_PERIOD_MS);
  }
}

void setup() {
  Serial.begin(115200);

  xTaskCreate(Task1, "Task1", 1000, NULL, 1, NULL);
  xTaskCreate(Task2, "Task2", 1000, NULL, 1, NULL);
}

void loop() {
}
