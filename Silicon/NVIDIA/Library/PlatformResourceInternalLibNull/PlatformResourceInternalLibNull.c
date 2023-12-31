/** @file
*
*  Copyright (c) 2020-2022, NVIDIA CORPORATION & AFFILIATES. All rights reserved.
*
*  SPDX-License-Identifier: BSD-2-Clause-Patent
*
**/

#include <Library/PlatformResourceLib.h>
#include <Library/PlatformResourceInternalLib.h>

/**
  Retrieve chip specific version for GIC

**/
BOOLEAN
EFIAPI
GetGicInfoInternal (
  OUT TEGRA_GIC_INFO  *GicInfo
  )
{
  return FALSE;
}

/**
  Retrieve Tegra UART Base Address

**/
BOOLEAN
EFIAPI
GetTegraUARTBaseAddressInternal (
  OUT EFI_PHYSICAL_ADDRESS  *TegraUARTBaseAddress
  )
{
  return FALSE;
}

/**
  Retrieve the type and address of UART based on the instance Number

**/
BOOLEAN
EFIAPI
GetUARTInstanceInfoInternal (
  OUT UINT32                *UARTInstanceType,
  OUT EFI_PHYSICAL_ADDRESS  *UARTInstanceAddress
  )
{
  return FALSE;
}

/**
  Retrieve CPU BL Address

**/
BOOLEAN
EFIAPI
GetCPUBLBaseAddressInternal (
  OUT UINTN  *CpuBootloaderAddress
  )
{
  return FALSE;
}

/**
  Retrieve DTB Address

**/
BOOLEAN
EFIAPI
GetDTBBaseAddressInternal (
  OUT UINT64  *DTBBaseAddress
  )
{
  return FALSE;
}

/**
  Retrieve GR Blob Address

**/
BOOLEAN
EFIAPI
GetGRBlobBaseAddressInternal (
  OUT UINT64  *GRBlobBaseAddress
  )
{
  return FALSE;
}

/**
  Validate Active Boot Chain

**/
BOOLEAN
EFIAPI
ValidateActiveBootChainInternal (
  VOID
  )
{
  return FALSE;
}

/**
  Set next boot chain

**/
BOOLEAN
EFIAPI
SetNextBootChainInternal (
  IN  UINT32  BootChain
  )
{
  return FALSE;
}

/**
  Get Platform Resource Information

**/
BOOLEAN
EFIAPI
GetPlatformResourceInformationInternal (
  IN TEGRA_PLATFORM_RESOURCE_INFO  *PlatformResourceInfo
  )
{
  return FALSE;
}
