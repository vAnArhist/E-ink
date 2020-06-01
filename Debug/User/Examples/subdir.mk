################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/Examples/EPD_1in54_V2_test.c \
../User/Examples/EPD_1in54_test.c \
../User/Examples/ImageData.c 

OBJS += \
./User/Examples/EPD_1in54_V2_test.o \
./User/Examples/EPD_1in54_test.o \
./User/Examples/ImageData.o 

C_DEPS += \
./User/Examples/EPD_1in54_V2_test.d \
./User/Examples/EPD_1in54_test.d \
./User/Examples/ImageData.d 


# Each subdirectory must supply rules for building sources it contributes
User/Examples/EPD_1in54_V2_test.o: ../User/Examples/EPD_1in54_V2_test.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Examples/EPD_1in54_V2_test.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/Examples/EPD_1in54_test.o: ../User/Examples/EPD_1in54_test.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Examples/EPD_1in54_test.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/Examples/ImageData.o: ../User/Examples/ImageData.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Examples/ImageData.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

