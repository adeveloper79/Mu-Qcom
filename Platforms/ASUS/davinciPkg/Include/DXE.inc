INF MdeModulePkg/Core/Dxe/DxeMain.inf
INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
 
#INF Binaries/davinci/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
#INF Binaries/davinci/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
#INF Binaries/davinci/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf
#INF Binaries/davinci/MiPkg/Protocol/MiToken/MiToken.inf

INF Binaries/davinci/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
INF Binaries/davinci/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf

INF Binaries/davinci/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
INF Binaries/davinci/QcomPkg/Drivers/SimpleTextInOutSerialDxe/SimpleTextInOutSerial.inf
INF Binaries/davinci/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf

INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

INF Binaries/davinci/QcomPkg/Drivers/FontDxe/FontDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf

INF Binaries/davinci/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf

!if $(USE_DISPLAYDXE) == 1
	INF Binaries/davinci/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif

INF Binaries/davinci/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
INF Binaries/davinci/MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
INF Binaries/davinci/MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf

INF FatPkg/EnhancedFatDxe/Fat.inf
INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
INF MdeModulePkg/Universal/FvSimpleFileSystemDxe/FvSimpleFileSystemDxe.inf

INF Binaries/davinci/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/ClockDxe/ClockDxe.inf

INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf

INF Binaries/davinci/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
INF Binaries/davinci/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf

# Only used for DisplayDxe for Qualcomm Demura
#INF Binaries/davinci/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf

INF Binaries/davinci/QcomPkg/Drivers/VibratorDxe/VibratorDxe.inf

!if $(USE_DISPLAYDXE) == 1
	INF Binaries/davinci/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
	INF QcomPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

INF MdeModulePkg/Bus/Pci/PciBusDxe/PciBusDxe.inf
INF MdeModulePkg/Bus/Pci/NvmExpressDxe/NvmExpressDxe.inf
INF CryptoPkg/Driver/CryptoDxe.inf

INF Binaries/davinci/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
INF Binaries/davinci/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
INF Binaries/davinci/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
INF Binaries/davinci/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/XhciDxe/XhciDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/UsbBusDxe/UsbBusDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/UsbKbDxe/UsbKbDxe.inf

INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf

INF Binaries/davinci/QcomPkg/Drivers/UsbMassStorageDxe/UsbMassStorageDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/HashDxe/HashDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/MacDxe/MacDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/RNGDxe/RngDxe.inf

INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
INF MdeModulePkg/Universal/Acpi/BootGraphicsResourceTableDxe/BootGraphicsResourceTableDxe.inf
INF MdeModulePkg/Universal/Acpi/FirmwarePerformanceDataTableDxe/FirmwarePerformanceDxe.inf
INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

INF Binaries/davinci/QcomPkg/Drivers/PILDxe/PILDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
INF Binaries/davinci/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
INF Binaries/davinci/QcomPkg/Application/QcomChargerApp/QcomChargerApp.inf
INF Binaries/davinci/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf