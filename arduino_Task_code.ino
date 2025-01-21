#include <Arduino_FreeRTOS.h>

#define TASK1_PRIORITY 2
#define TASK2_PRIORITY 3
#define TASK3_PRIORITY 1

#define STACK_SIZE 128
void task1(void *pvParameters);
void task2(void *pvParameters);
void task3(void *pvParameters);

TaskHandle_t TaskHandle_1, TaskHandle_2, TaskHandle_3;

void setup() {
  Serial.begin(9600);
  xTaskCreate(task1, "Task 1", STACK_SIZE, NULL, TASK1_PRIORITY, &TaskHandle_1);
  xTaskCreate(task2, "Task 2", STACK_SIZE, NULL, TASK2_PRIORITY, &TaskHandle_2);
  xTaskCreate(task3, "Task 3", STACK_SIZE, NULL, TASK3_PRIORITY, &TaskHandle_3);

  vTaskStartScheduler();
}

void loop() {

}

void task1(void *pvParameters) {
  for (;;) {
    Serial.println("Task 1 is running");
    vTaskDelay(2000/ portTICK_PERIOD_MS ); 
  }
}

void task2(void *pvParameters) {
  for (;;) {
    Serial.println("Task 2 is running");
    vTaskDelay(3000/portTICK_PERIOD_MS );
  }
}

void task3(void *pvParameters) {
  for (;;) {
    Serial.println("Task 3 is running");
    vTaskDelay(5000/portTICK_PERIOD_MS );
  }
}
