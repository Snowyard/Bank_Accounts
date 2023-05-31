##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Section15Challenge
ConfigurationName      :=Debug
WorkspacePath          :=/Users/brunobrett/Desktop/CPP/FirstWorkspace
ProjectPath            :=/Users/brunobrett/Desktop/CPP/FirstWorkspace/Section15Challenge
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Bruno Brett
Date                   :=31/05/2023
CodeLitePath           :="/Users/brunobrett/Library/Application Support/CodeLite"
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Section15Challenge.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -O0 -std=c++17 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/Savings_account.cpp$(ObjectSuffix) $(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/Acc_Utility.cpp$(ObjectSuffix) $(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) $(IntermediateDirectory)/Chequing_account.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Trust_account.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Savings_account.cpp$(ObjectSuffix): Savings_account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Savings_account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Savings_account.cpp$(DependSuffix) -MM Savings_account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/brunobrett/Desktop/CPP/FirstWorkspace/Section15Challenge/Savings_account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Savings_account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Savings_account.cpp$(PreprocessSuffix): Savings_account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Savings_account.cpp$(PreprocessSuffix) Savings_account.cpp

$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Account.cpp$(DependSuffix) -MM Account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/brunobrett/Desktop/CPP/FirstWorkspace/Section15Challenge/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/Acc_Utility.cpp$(ObjectSuffix): Acc_Utility.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Acc_Utility.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Acc_Utility.cpp$(DependSuffix) -MM Acc_Utility.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/brunobrett/Desktop/CPP/FirstWorkspace/Section15Challenge/Acc_Utility.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Acc_Utility.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Acc_Utility.cpp$(PreprocessSuffix): Acc_Utility.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Acc_Utility.cpp$(PreprocessSuffix) Acc_Utility.cpp

$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix): I_Printable.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/I_Printable.cpp$(DependSuffix) -MM I_Printable.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/brunobrett/Desktop/CPP/FirstWorkspace/Section15Challenge/I_Printable.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/I_Printable.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/I_Printable.cpp$(PreprocessSuffix): I_Printable.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/I_Printable.cpp$(PreprocessSuffix) I_Printable.cpp

$(IntermediateDirectory)/Chequing_account.cpp$(ObjectSuffix): Chequing_account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Chequing_account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Chequing_account.cpp$(DependSuffix) -MM Chequing_account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/brunobrett/Desktop/CPP/FirstWorkspace/Section15Challenge/Chequing_account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Chequing_account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Chequing_account.cpp$(PreprocessSuffix): Chequing_account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Chequing_account.cpp$(PreprocessSuffix) Chequing_account.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/brunobrett/Desktop/CPP/FirstWorkspace/Section15Challenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Trust_account.cpp$(ObjectSuffix): Trust_account.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Trust_account.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Trust_account.cpp$(DependSuffix) -MM Trust_account.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "/Users/brunobrett/Desktop/CPP/FirstWorkspace/Section15Challenge/Trust_account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Trust_account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Trust_account.cpp$(PreprocessSuffix): Trust_account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Trust_account.cpp$(PreprocessSuffix) Trust_account.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


