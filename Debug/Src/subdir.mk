################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Src/adc.c \
../Src/fan_controller.c \
../Src/gpio.c \
../Src/isr.c \
../Src/main.c \
../Src/pwm.c \
../Src/syscalls.c \
../Src/sysmem.c 

OBJS += \
./Src/adc.o \
./Src/fan_controller.o \
./Src/gpio.o \
./Src/isr.o \
./Src/main.o \
./Src/pwm.o \
./Src/syscalls.o \
./Src/sysmem.o 

C_DEPS += \
./Src/adc.d \
./Src/fan_controller.d \
./Src/gpio.d \
./Src/isr.d \
./Src/main.d \
./Src/pwm.d \
./Src/syscalls.d \
./Src/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Src/%.o Src/%.su Src/%.cyclo: ../Src/%.c Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F1 -DSTM32F100RBTx -c -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Src

clean-Src:
	-$(RM) ./Src/adc.cyclo ./Src/adc.d ./Src/adc.o ./Src/adc.su ./Src/fan_controller.cyclo ./Src/fan_controller.d ./Src/fan_controller.o ./Src/fan_controller.su ./Src/gpio.cyclo ./Src/gpio.d ./Src/gpio.o ./Src/gpio.su ./Src/isr.cyclo ./Src/isr.d ./Src/isr.o ./Src/isr.su ./Src/main.cyclo ./Src/main.d ./Src/main.o ./Src/main.su ./Src/pwm.cyclo ./Src/pwm.d ./Src/pwm.o ./Src/pwm.su ./Src/syscalls.cyclo ./Src/syscalls.d ./Src/syscalls.o ./Src/syscalls.su ./Src/sysmem.cyclo ./Src/sysmem.d ./Src/sysmem.o ./Src/sysmem.su

.PHONY: clean-Src

