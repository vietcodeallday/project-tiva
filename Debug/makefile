################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./tm4c123gh6pm_startup_ccs.obj" \
"./Confirm/Confirm.obj" \
"./Filter/Filter.obj" \
"./GPIO/GPIO.obj" \
"./State/State.obj" \
"./State_out/State_out.obj" \
"./Systick/Systick.obj" \
"./Timer1/Timer1.obj" \
"./Timer_0/Timer_0.obj" \
"./UART/UART.obj" \
"../tm4c123gh6pm.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include Confirm/subdir_vars.mk
-include Filter/subdir_vars.mk
-include GPIO/subdir_vars.mk
-include State/subdir_vars.mk
-include State_out/subdir_vars.mk
-include Systick/subdir_vars.mk
-include Timer1/subdir_vars.mk
-include Timer_0/subdir_vars.mk
-include UART/subdir_vars.mk
-include subdir_rules.mk
-include Confirm/subdir_rules.mk
-include Filter/subdir_rules.mk
-include GPIO/subdir_rules.mk
-include State/subdir_rules.mk
-include State_out/subdir_rules.mk
-include Systick/subdir_rules.mk
-include Timer1/subdir_rules.mk
-include Timer_0/subdir_rules.mk
-include UART/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
projectInClass.out \

EXE_OUTPUTS__QUOTED += \
"projectInClass.out" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "projectInClass.out"

# Tool invocations
projectInClass.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: Arm Linker'
	"" -z -m"projectInClass.map" --heap_size=0 --stack_size=512 -i"/lib" -i"/include" --reread_libs --diag_wrap=off --display_error_number --warn_sections --xml_link_info="projectInClass_linkInfo.xml" --rom_model -o "projectInClass.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "tm4c123gh6pm_startup_ccs.obj" "Confirm\Confirm.obj" "Filter\Filter.obj" "GPIO\GPIO.obj" "State\State.obj" "State_out\State_out.obj" "Systick\Systick.obj" "Timer1\Timer1.obj" "Timer_0\Timer_0.obj" "UART\UART.obj" 
	-$(RM) "main.d" "tm4c123gh6pm_startup_ccs.d" "Confirm\Confirm.d" "Filter\Filter.d" "GPIO\GPIO.d" "State\State.d" "State_out\State_out.d" "Systick\Systick.d" "Timer1\Timer1.d" "Timer_0\Timer_0.d" "UART\UART.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

