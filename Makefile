.PHONY: clean All

All:
	@echo "----------Building project:[ Classes - Debug ]----------"
	@cd "Classes" && "$(MAKE)" -f  "Classes.mk"
clean:
	@echo "----------Cleaning project:[ Classes - Debug ]----------"
	@cd "Classes" && "$(MAKE)" -f  "Classes.mk" clean
