.PHONY: clean All

All:
	@echo "----------Building project:[ TestProj - Debug ]----------"
	@cd "TestProj" && "$(MAKE)" -f  "TestProj.mk"
clean:
	@echo "----------Cleaning project:[ TestProj - Debug ]----------"
	@cd "TestProj" && "$(MAKE)" -f  "TestProj.mk" clean
