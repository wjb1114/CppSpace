.PHONY: clean All

All:
	@echo "----------Building project:[ VectorsTesting - Debug ]----------"
	@cd "VectorsTesting" && "$(MAKE)" -f  "VectorsTesting.mk"
clean:
	@echo "----------Cleaning project:[ VectorsTesting - Debug ]----------"
	@cd "VectorsTesting" && "$(MAKE)" -f  "VectorsTesting.mk" clean
