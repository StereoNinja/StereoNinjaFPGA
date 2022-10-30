.PHONY: all
PRJNAME :=HDMI_Transciever
#PRJNAME := test_project
create:
	mkdir $(PRJNAME)	
	#  ./$(PRJNAME)/$(PRJNAME).v   ./$(PRJNAME)/$(PRJNAME)_tb.cpp  ./$(PRJNAME)/testb.h ./$(PRJNAME)/$(PRJNAME).ys ./$(PRJNAME)/ulx3s_empty.config ./$(PRJNAME)/ulx3s_v20.lpf  ./$(PRJNAME)/Makefile
	cp ./emty_project/emty_project_tb.cpp ./emty_project/emty_project.ys ./emty_project/Makefile ./emty_project/testb.h ./emty_project/ulx3s_empty.config ./emty_project/ulx3s_v20.lpf ./$(PRJNAME) 
	mv ./$(PRJNAME)/emty_project_tb.cpp ./$(PRJNAME)/$(PRJNAME)_tb.cpp
	mv ./$(PRJNAME)/emty_project.ys ./$(PRJNAME)/$(PRJNAME).ys
	touch ./$(PRJNAME)/$(PRJNAME).v
	sed -i 's/Vemty_project/V$(PRJNAME)/g' ./$(PRJNAME)/$(PRJNAME)_tb.cpp
	sed -i 's/emty_project/V$(PRJNAME)/g' ./$(PRJNAME)/$(PRJNAME).ys
	sed -i 's/emty_project/V$(PRJNAME)/g' ./$(PRJNAME)/Makefile
	
   
    
