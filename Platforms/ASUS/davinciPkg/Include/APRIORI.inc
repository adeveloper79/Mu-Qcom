APRIORI DXE {

	# First, install the PCD driver and call DxeInit
	INF MdeModulePkg/Core/Dxe/DxeMain.inf
	INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

	INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
	INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
	INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf

	# Next, install cpu protocol and enable the interrupt controller
	INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
	INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf

	# Core Drivers
	INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
	INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
	INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

	INF Binaries/davinci/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

	INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

	INF Binaries/davinci/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
	INF Binaries/davinci/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
	INF Binaries/davinci/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

	INF Binaries/davinci/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
	INF Binaries/davinci/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
	INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
	INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

	INF Binaries/davinci/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/UFSDxe/UFSDxe.inf

	INF FatPkg/EnhancedFatDxe/Fat.inf
	INF MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf

	INF Binaries/davinci/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

	INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
	
	INF Binaries/davinci/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/I2CDxe/I2CDxe.inf

	!if $(USE_DISPLAYDXE) == 1
		INF Binaries/davinci/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
	!else
		INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
	!endif

	!if $(USE_DISPLAYDXE) == 1
		INF Binaries/davinci/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
	!endif

	INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf

	INF Binaries/davinci/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf

	INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
	INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
	INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
	INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
	INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

	INF Binaries/davinci/QcomPkg/Drivers/FontDxe/FontDxe.inf

	INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf

	INF Binaries/davinci/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
	INF Binaries/davinci/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf

	INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
	INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
	INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}