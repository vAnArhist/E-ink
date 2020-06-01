################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../User/e-Paper/EPD_1in02d.c \
../User/e-Paper/EPD_1in54.c \
../User/e-Paper/EPD_1in54_V2.c \
../User/e-Paper/EPD_1in54b.c \
../User/e-Paper/EPD_1in54b_V2.c \
../User/e-Paper/EPD_1in54c.c \
../User/e-Paper/EPD_2in13.c \
../User/e-Paper/EPD_2in13_V2.c \
../User/e-Paper/EPD_2in13b_V2.c \
../User/e-Paper/EPD_2in13bc.c \
../User/e-Paper/EPD_2in13d.c \
../User/e-Paper/EPD_2in7.c \
../User/e-Paper/EPD_2in7b.c \
../User/e-Paper/EPD_2in9.c \
../User/e-Paper/EPD_2in9b_V2.c \
../User/e-Paper/EPD_2in9bc.c \
../User/e-Paper/EPD_2in9d.c \
../User/e-Paper/EPD_4in2.c \
../User/e-Paper/EPD_4in2bc.c \
../User/e-Paper/EPD_5in83.c \
../User/e-Paper/EPD_5in83bc.c \
../User/e-Paper/EPD_7in5.c \
../User/e-Paper/EPD_7in5_HD.c \
../User/e-Paper/EPD_7in5_V2.c \
../User/e-Paper/EPD_7in5b_HD.c \
../User/e-Paper/EPD_7in5b_V2.c \
../User/e-Paper/EPD_7in5bc.c \
../User/e-Paper/ImageData.c 

OBJS += \
./User/e-Paper/EPD_1in02d.o \
./User/e-Paper/EPD_1in54.o \
./User/e-Paper/EPD_1in54_V2.o \
./User/e-Paper/EPD_1in54b.o \
./User/e-Paper/EPD_1in54b_V2.o \
./User/e-Paper/EPD_1in54c.o \
./User/e-Paper/EPD_2in13.o \
./User/e-Paper/EPD_2in13_V2.o \
./User/e-Paper/EPD_2in13b_V2.o \
./User/e-Paper/EPD_2in13bc.o \
./User/e-Paper/EPD_2in13d.o \
./User/e-Paper/EPD_2in7.o \
./User/e-Paper/EPD_2in7b.o \
./User/e-Paper/EPD_2in9.o \
./User/e-Paper/EPD_2in9b_V2.o \
./User/e-Paper/EPD_2in9bc.o \
./User/e-Paper/EPD_2in9d.o \
./User/e-Paper/EPD_4in2.o \
./User/e-Paper/EPD_4in2bc.o \
./User/e-Paper/EPD_5in83.o \
./User/e-Paper/EPD_5in83bc.o \
./User/e-Paper/EPD_7in5.o \
./User/e-Paper/EPD_7in5_HD.o \
./User/e-Paper/EPD_7in5_V2.o \
./User/e-Paper/EPD_7in5b_HD.o \
./User/e-Paper/EPD_7in5b_V2.o \
./User/e-Paper/EPD_7in5bc.o \
./User/e-Paper/ImageData.o 

C_DEPS += \
./User/e-Paper/EPD_1in02d.d \
./User/e-Paper/EPD_1in54.d \
./User/e-Paper/EPD_1in54_V2.d \
./User/e-Paper/EPD_1in54b.d \
./User/e-Paper/EPD_1in54b_V2.d \
./User/e-Paper/EPD_1in54c.d \
./User/e-Paper/EPD_2in13.d \
./User/e-Paper/EPD_2in13_V2.d \
./User/e-Paper/EPD_2in13b_V2.d \
./User/e-Paper/EPD_2in13bc.d \
./User/e-Paper/EPD_2in13d.d \
./User/e-Paper/EPD_2in7.d \
./User/e-Paper/EPD_2in7b.d \
./User/e-Paper/EPD_2in9.d \
./User/e-Paper/EPD_2in9b_V2.d \
./User/e-Paper/EPD_2in9bc.d \
./User/e-Paper/EPD_2in9d.d \
./User/e-Paper/EPD_4in2.d \
./User/e-Paper/EPD_4in2bc.d \
./User/e-Paper/EPD_5in83.d \
./User/e-Paper/EPD_5in83bc.d \
./User/e-Paper/EPD_7in5.d \
./User/e-Paper/EPD_7in5_HD.d \
./User/e-Paper/EPD_7in5_V2.d \
./User/e-Paper/EPD_7in5b_HD.d \
./User/e-Paper/EPD_7in5b_V2.d \
./User/e-Paper/EPD_7in5bc.d \
./User/e-Paper/ImageData.d 


# Each subdirectory must supply rules for building sources it contributes
User/e-Paper/EPD_1in02d.o: ../User/e-Paper/EPD_1in02d.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_1in02d.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_1in54.o: ../User/e-Paper/EPD_1in54.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_1in54.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_1in54_V2.o: ../User/e-Paper/EPD_1in54_V2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_1in54_V2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_1in54b.o: ../User/e-Paper/EPD_1in54b.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_1in54b.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_1in54b_V2.o: ../User/e-Paper/EPD_1in54b_V2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_1in54b_V2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_1in54c.o: ../User/e-Paper/EPD_1in54c.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_1in54c.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in13.o: ../User/e-Paper/EPD_2in13.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in13.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in13_V2.o: ../User/e-Paper/EPD_2in13_V2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in13_V2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in13b_V2.o: ../User/e-Paper/EPD_2in13b_V2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in13b_V2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in13bc.o: ../User/e-Paper/EPD_2in13bc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in13bc.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in13d.o: ../User/e-Paper/EPD_2in13d.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in13d.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in7.o: ../User/e-Paper/EPD_2in7.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in7.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in7b.o: ../User/e-Paper/EPD_2in7b.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in7b.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in9.o: ../User/e-Paper/EPD_2in9.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in9.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in9b_V2.o: ../User/e-Paper/EPD_2in9b_V2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in9b_V2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in9bc.o: ../User/e-Paper/EPD_2in9bc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in9bc.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_2in9d.o: ../User/e-Paper/EPD_2in9d.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_2in9d.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_4in2.o: ../User/e-Paper/EPD_4in2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_4in2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_4in2bc.o: ../User/e-Paper/EPD_4in2bc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_4in2bc.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_5in83.o: ../User/e-Paper/EPD_5in83.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_5in83.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_5in83bc.o: ../User/e-Paper/EPD_5in83bc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_5in83bc.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_7in5.o: ../User/e-Paper/EPD_7in5.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_7in5.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_7in5_HD.o: ../User/e-Paper/EPD_7in5_HD.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_7in5_HD.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_7in5_V2.o: ../User/e-Paper/EPD_7in5_V2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_7in5_V2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_7in5b_HD.o: ../User/e-Paper/EPD_7in5b_HD.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_7in5b_HD.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_7in5b_V2.o: ../User/e-Paper/EPD_7in5b_V2.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_7in5b_V2.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/EPD_7in5bc.o: ../User/e-Paper/EPD_7in5bc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/EPD_7in5bc.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
User/e-Paper/ImageData.o: ../User/e-Paper/ImageData.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DDEBUG -DSTM32L432xx -c -I../Inc -I../User/e-Paper -I../Drivers/CMSIS/Include -I../User/GUI -I../User/Config -I../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../Drivers/STM32L4xx_HAL_Driver/Inc -I../User/Fonts -I../User/Examples -I../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"User/e-Paper/ImageData.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

