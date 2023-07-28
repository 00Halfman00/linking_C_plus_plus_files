.PHONY: clean All

All:
	@echo "----------Building project:[ implementingMethods2 - Debug ]----------"
	@cd "implementingMethods2" && "$(MAKE)" -f  "implementingMethods2.mk"
clean:
	@echo "----------Cleaning project:[ implementingMethods2 - Debug ]----------"
	@cd "implementingMethods2" && "$(MAKE)" -f  "implementingMethods2.mk" clean
