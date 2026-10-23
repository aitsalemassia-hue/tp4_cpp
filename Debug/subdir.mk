################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Etudiant.cpp \
../Livre.cpp \
../MainEtudiant.cpp \
../University.cpp 

CPP_DEPS += \
./Etudiant.d \
./Livre.d \
./MainEtudiant.d \
./University.d 

OBJS += \
./Etudiant.o \
./Livre.o \
./MainEtudiant.o \
./University.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Etudiant.d ./Etudiant.o ./Livre.d ./Livre.o ./MainEtudiant.d ./MainEtudiant.o ./University.d ./University.o

.PHONY: clean--2e-

