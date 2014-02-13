#Executable
EXECUTABLE=hello

#Sources
SOURCES=HelloWorld.m CGTKSignalData.m CGTKCallbackData.m CGTKSignalConnector.m CGTK.m CGTKObject.m CGTKWidget.m CGTKBuilder.m CGTKContainer.m CGTKBin.m CGTKWindow.m CGTKDialog.m CGTKAboutDialog.m CGTKColorSelectionDialog.m CGTKFileChooserDialog.m CGTKFontSelectionDialog.m CGTKMessageDialog.m CGTKRecentChooserDialog.m CGTKAssistant.m CGTKOffscreenWindow.m CGTKPlug.m CGTKAlignment.m CGTKFrame.m CGTKAspectFrame.m CGTKButton.m CGTKToggleButton.m CGTKCheckButton.m CGTKRadioButton.m CGTKColorButton.m CGTKFontButton.m CGTKLinkButton.m CGTKScaleButton.m CGTKVolumeButton.m CGTKItem.m CGTKMenuItem.m CGTKCheckMenuItem.m CGTKRadioMenuItem.m CGTKImageMenuItem.m CGTKSeparatorMenuItem.m CGTKTearoffMenuItem.m CGTKComboBox.m CGTKComboBoxText.m CGTKEventBox.m CGTKExpander.m CGTKHandleBox.m CGTKToolItem.m CGTKToolButton.m CGTKMenuToolButton.m CGTKToggleToolButton.m CGTKRadioToolButton.m CGTKSeparatorToolItem.m CGTKScrolledWindow.m CGTKViewport.m CGTKBox.m CGTKButtonBox.m CGTKHButtonBox.m CGTKVButtonBox.m CGTKVBox.m CGTKColorSelection.m CGTKFileChooserWidget.m CGTKFontSelection.m CGTKRecentChooserWidget.m CGTKHBox.m CGTKCombo.m CGTKFileChooserButton.m CGTKInfoBar.m CGTKStatusbar.m CGTKFixed.m CGTKPaned.m CGTKHPaned.m CGTKVPaned.m CGTKIconView.m CGTKLayout.m CGTKMenuShell.m CGTKMenuBar.m CGTKMenu.m CGTKRecentChooserMenu.m CGTKNotebook.m CGTKSocket.m CGTKTable.m CGTKTextView.m CGTKToolbar.m CGTKToolItemGroup.m CGTKToolPalette.m CGTKTreeView.m CGTKEntry.m CGTKSpinButton.m CGTKMisc.m CGTKLabel.m CGTKAccelLabel.m CGTKArrow.m CGTKImage.m CGTKCalendar.m CGTKCellView.m CGTKDrawingArea.m CGTKSpinner.m CGTKRange.m CGTKScale.m CGTKHScale.m CGTKVScale.m CGTKScrollbar.m CGTKHScrollbar.m CGTKVScrollbar.m CGTKSeparator.m CGTKHSeparator.m CGTKVSeparator.m CGTKHSV.m CGTKInvisible.m CGTKProgress.m CGTKProgressBar.m

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

#GTK dependencies
GTKDEPS=`pkg-config --libs gtk+-2.0`

#Common flags
COMMONFLAGS=$(OBJCFLAGS) $(GNUSTEPDEPS) $(GTKDEPS)


#Targets

#Linux Target
linux: all

#Mac Target
mac: COMMONFLAGS=$(MACOBJCFLAGS) $(GTKDEPS)
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
	rm -rf *.o *.d hello
