################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../UserInterface/CommandParser.cpp \
../UserInterface/Mediator.cpp 

OBJS += \
./UserInterface/CommandParser.o \
./UserInterface/Mediator.o 

CPP_DEPS += \
./UserInterface/CommandParser.d \
./UserInterface/Mediator.d 


# Each subdirectory must supply rules for building sources it contributes
UserInterface/%.o: ../UserInterface/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -w -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


