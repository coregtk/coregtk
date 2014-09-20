#Executable
EXECUTABLE=gir2coregtk

#Sources
SOURCES=main.m Gir2Objc/Gir2Objc.m XMLReader/XMLReader.m GIR/GIRApi.m GIR/GIRArray.m GIR/GIRBase.m GIR/GIRClass.m GIR/GIRConstant.m GIR/GIRConstructor.m GIR/GIRDoc.m GIR/GIREnumeration.m GIR/GIRField.m GIR/GIRFunction.m GIR/GIRImplements.m GIR/GIRInterface.m GIR/GIRParameter.m GIR/GIRProperty.m GIR/GIRMember.m GIR/GIRMethod.m GIR/GIRNamespace.m GIR/GIRPrerequisite.m GIR/GIRReturnValue.m GIR/GIRType.m GIR/GIRVarargs.m GIR/GIRVirtualMethod.m Gir2CoreGTK/Generator.m Gir2CoreGTK/GenObj.m Gir2CoreGTK/GenObjFunction.m Gir2CoreGTK/GenObjConstant.m Gir2CoreGTK/GenObjConstructor.m Gir2CoreGTK/GenObjEnumeration.m Gir2CoreGTK/Util.m

#Objects
OBJECTS=$(SOURCES:.m=.o)

#compiler
CC=gcc

#CFLAGS
CFLAGS=-c -Wall

#Objective-c specific flags
OBJCFLAGS=`gnustep-config --objc-flags` `pkg-config --cflags gtk+-2.0`

#Objective-c specific flags
MACOBJCFLAGS=-framework Foundation

#GNUstep dependencies
GNUSTEPDEPS=`gnustep-config --base-libs`

#Common flags
COMMONFLAGS=$(OBJCFLAGS) $(GNUSTEPDEPS)


#Targets

#Linux Target
linux: all

#Mac Target
mac: COMMONFLAGS=$(MACOBJCFLAGS)
mac: all

#Windows Target
windows: all

#All Target
all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(COMMONFLAGS) -o $@

%.o: %.m
	$(CC) $(CFLAGS) $(COMMONFLAGS) $< -o $@

clean: 
	rm -rf *.o *.d $(EXECUTABLE)
	rm -rf Gir2Objc/*.o Gir2Objc/*.d
	rm -rf GIR/*.o GIR/*.d
	rm -rf XMLReader/*.o XMLReader/*.d
	rm -rf Gir2CoreGTK/*.o Gir2CoreGTK/*.d
