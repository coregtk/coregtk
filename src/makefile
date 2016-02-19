#Executable
EXECUTABLE=coregtk_test

#Sources
SOURCES=main.m CoreGTK/CGTK.m CoreGTK/CGTKBase.m CoreGTK/CGTKTypeWrapper.m CoreGTK/CGTKBaseBuilder.m CoreGTK/CGTKCallbackData.m CoreGTK/CGTKSignalConnector.m CoreGTK/CGTKSignalData.m CoreGTK/CGTKAboutDialog.m CoreGTK/CGTKAccelLabel.m CoreGTK/CGTKAlignment.m CoreGTK/CGTKAppChooserButton.m CoreGTK/CGTKAppChooserDialog.m CoreGTK/CGTKAppChooserWidget.m CoreGTK/CGTKApplicationWindow.m CoreGTK/CGTKArrow.m CoreGTK/CGTKAspectFrame.m CoreGTK/CGTKAssistant.m CoreGTK/CGTKBin.m CoreGTK/CGTKBox.m CoreGTK/CGTKBuilder.m CoreGTK/CGTKButtonBox.m CoreGTK/CGTKButton.m CoreGTK/CGTKCalendar.m CoreGTK/CGTKCellView.m CoreGTK/CGTKCheckButton.m CoreGTK/CGTKCheckMenuItem.m CoreGTK/CGTKColorButton.m CoreGTK/CGTKColorChooserDialog.m CoreGTK/CGTKColorChooserWidget.m CoreGTK/CGTKColorSelectionDialog.m CoreGTK/CGTKColorSelection.m CoreGTK/CGTKComboBox.m CoreGTK/CGTKComboBoxText.m CoreGTK/CGTKContainer.m CoreGTK/CGTKDialog.m CoreGTK/CGTKDrawingArea.m CoreGTK/CGTKEntry.m CoreGTK/CGTKEventBox.m CoreGTK/CGTKExpander.m CoreGTK/CGTKFileChooserButton.m CoreGTK/CGTKFileChooserDialog.m CoreGTK/CGTKFileChooserWidget.m CoreGTK/CGTKFixed.m CoreGTK/CGTKFontButton.m CoreGTK/CGTKFontChooserDialog.m CoreGTK/CGTKFontChooserWidget.m CoreGTK/CGTKFontSelectionDialog.m CoreGTK/CGTKFontSelection.m CoreGTK/CGTKFrame.m CoreGTK/CGTKGrid.m CoreGTK/CGTKHandleBox.m CoreGTK/CGTKHBox.m CoreGTK/CGTKHButtonBox.m CoreGTK/CGTKHeaderBar.m CoreGTK/CGTKHPaned.m CoreGTK/CGTKHScale.m CoreGTK/CGTKHScrollbar.m CoreGTK/CGTKHSeparator.m CoreGTK/CGTKHSV.m CoreGTK/CGTKIconView.m CoreGTK/CGTKImage.m CoreGTK/CGTKImageMenuItem.m CoreGTK/CGTKInfoBar.m CoreGTK/CGTKInvisible.m CoreGTK/CGTKLabel.m CoreGTK/CGTKLayout.m CoreGTK/CGTKLevelBar.m CoreGTK/CGTKLinkButton.m CoreGTK/CGTKListBox.m CoreGTK/CGTKListBoxRow.m CoreGTK/CGTKLockButton.m CoreGTK/CGTKMenuBar.m CoreGTK/CGTKMenuButton.m CoreGTK/CGTKMenuItem.m CoreGTK/CGTKMenu.m CoreGTK/CGTKMenuShell.m CoreGTK/CGTKMenuToolButton.m CoreGTK/CGTKMessageDialog.m CoreGTK/CGTKMisc.m CoreGTK/CGTKNotebook.m CoreGTK/CGTKOffscreenWindow.m CoreGTK/CGTKOverlay.m CoreGTK/CGTKPaned.m CoreGTK/CGTKPlacesSidebar.m CoreGTK/CGTKProgressBar.m CoreGTK/CGTKRadioButton.m CoreGTK/CGTKRadioMenuItem.m CoreGTK/CGTKRadioToolButton.m CoreGTK/CGTKRange.m CoreGTK/CGTKRecentChooserDialog.m CoreGTK/CGTKRecentChooserMenu.m CoreGTK/CGTKRecentChooserWidget.m CoreGTK/CGTKRevealer.m CoreGTK/CGTKScaleButton.m CoreGTK/CGTKScale.m CoreGTK/CGTKScrollbar.m CoreGTK/CGTKScrolledWindow.m CoreGTK/CGTKSearchBar.m CoreGTK/CGTKSearchEntry.m CoreGTK/CGTKSeparator.m CoreGTK/CGTKSeparatorMenuItem.m CoreGTK/CGTKSeparatorToolItem.m CoreGTK/CGTKSpinButton.m CoreGTK/CGTKSpinner.m CoreGTK/CGTKStack.m CoreGTK/CGTKStackSwitcher.m CoreGTK/CGTKStatusbar.m CoreGTK/CGTKSwitch.m CoreGTK/CGTKTable.m CoreGTK/CGTKTearoffMenuItem.m CoreGTK/CGTKTextView.m CoreGTK/CGTKToggleButton.m CoreGTK/CGTKToggleToolButton.m CoreGTK/CGTKToolbar.m CoreGTK/CGTKToolButton.m CoreGTK/CGTKToolItemGroup.m CoreGTK/CGTKToolItem.m CoreGTK/CGTKToolPalette.m CoreGTK/CGTKTreeView.m CoreGTK/CGTKVBox.m CoreGTK/CGTKVButtonBox.m CoreGTK/CGTKViewport.m CoreGTK/CGTKVolumeButton.m CoreGTK/CGTKVPaned.m CoreGTK/CGTKVScale.m CoreGTK/CGTKVScrollbar.m CoreGTK/CGTKVSeparator.m CoreGTK/CGTKWidget.m CoreGTK/CGTKWindow.m

#Objects
OBJECTS=$(SOURCES:.m=.o)

#Indirect compiler for fixing GNUstep/clang argument bug 
ICC=./indirect_compiler.sh

#Compiler
CC=clang

#Compiler flags
CCFLAGS=-Qunused-arguments -Wno-deprecated-declarations -I. -I./CoreGTK

#CFLAGS
CFLAGS=-c

#Objective-c specific flags
MACOBJCFLAGS=-framework Foundation

#GNUstep dependencies
GNUSTEPDEPS=`gnustep-config --objc-flags` `gnustep-config --base-libs`

#GTK dependencies
GTKDEPS=`pkg-config --cflags gtk+-3.0` `pkg-config --libs gtk+-3.0`

#Common flags
COMMONFLAGS=$(CCFLAGS) $(GNUSTEPDEPS) $(GTKDEPS)


#Targets

#Linux Target
linux: all

#Mac Target
mac: COMMONFLAGS=$(CCFLAGS) $(MACOBJCFLAGS) $(GTKDEPS)
mac: all

#Windows Target
windows: all

#All Target
all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(ICC) $(CC) $(OBJECTS) $(COMMONFLAGS) -o $@

%.o: %.m
	$(ICC) $(CC) $(CFLAGS) $(COMMONFLAGS) $< -o $@

clean: 
	rm -rf *.o *.d $(EXECUTABLE)
	rm -rf CoreGTK/*.o CoreGTK/*.d $(EXECUTABLE)
