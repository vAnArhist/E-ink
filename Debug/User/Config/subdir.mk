################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/Config/DEV_Config.c 

OBJS += \
./User/Config/DEV_Config.o 

C_DEPS += \
./User/Config/DEV_Config.d 


# Each subdirectory must supply rules for building sources it contributes
User/Config/DEV_Config.o: ../User/Config/DEV_Config.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Config/DEV_Config.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

