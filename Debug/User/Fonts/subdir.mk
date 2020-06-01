################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/Fonts/font12.c \
../User/Fonts/font12CN.c \
../User/Fonts/font16.c \
../User/Fonts/font20.c \
../User/Fonts/font24.c \
../User/Fonts/font24CN.c \
../User/Fonts/font8.c 

OBJS += \
./User/Fonts/font12.o \
./User/Fonts/font12CN.o \
./User/Fonts/font16.o \
./User/Fonts/font20.o \
./User/Fonts/font24.o \
./User/Fonts/font24CN.o \
./User/Fonts/font8.o 

C_DEPS += \
./User/Fonts/font12.d \
./User/Fonts/font12CN.d \
./User/Fonts/font16.d \
./User/Fonts/font20.d \
./User/Fonts/font24.d \
./User/Fonts/font24CN.d \
./User/Fonts/font8.d 


# Each subdirectory must supply rules for building sources it contributes
User/Fonts/font12.o: ../User/Fonts/font12.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Fonts/font12.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/Fonts/font12CN.o: ../User/Fonts/font12CN.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Fonts/font12CN.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/Fonts/font16.o: ../User/Fonts/font16.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Fonts/font16.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/Fonts/font20.o: ../User/Fonts/font20.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Fonts/font20.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/Fonts/font24.o: ../User/Fonts/font24.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Fonts/font24.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/Fonts/font24CN.o: ../User/Fonts/font24CN.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Fonts/font24CN.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/Fonts/font8.o: ../User/Fonts/font8.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/Fonts/font8.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

