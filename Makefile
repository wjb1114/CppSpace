.PHONY: clean All

All:
	@echo "----------Building project:[ RoomCleaning - Debug ]----------"
	@cd "RoomCleaning" && "$(MAKE)" -f  "RoomCleaning.mk"
clean:
	@echo "----------Cleaning project:[ RoomCleaning - Debug ]----------"
	@cd "RoomCleaning" && "$(MAKE)" -f  "RoomCleaning.mk" clean
