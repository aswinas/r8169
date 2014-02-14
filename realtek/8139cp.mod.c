#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x568fba06, "module_layout" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0x242de438, "ethtool_op_get_link" },
	{ 0x8b2fe2f6, "eth_validate_addr" },
	{ 0xb1b13d8f, "pci_unregister_driver" },
	{ 0x87d591c5, "__pci_register_driver" },
	{ 0xd6247222, "pci_restore_state" },
	{ 0x898d3f44, "netif_device_attach" },
	{ 0xc6eecb7, "netdev_warn" },
	{ 0x49fadb13, "pci_set_master" },
	{ 0x8568e6eb, "netdev_info" },
	{ 0x69a2274d, "register_netdev" },
	{ 0xa7453353, "netif_napi_add" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x6676e3e5, "dma_set_mask" },
	{ 0xf1b1309d, "dma_supported" },
	{ 0xe47f3fac, "dev_err" },
	{ 0xe67d9c7, "pci_request_regions" },
	{ 0x95ddc903, "pci_set_mwi" },
	{ 0xc1211685, "pci_enable_device" },
	{ 0xc70195f6, "alloc_etherdev_mqs" },
	{ 0xe326a839, "_dev_info" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf0cbeff4, "__pci_enable_wake" },
	{ 0x6e794aa3, "pci_choose_state" },
	{ 0x1309496e, "pci_save_state" },
	{ 0x3f96355e, "netif_device_detach" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf10744eb, "__napi_schedule" },
	{ 0x2b021c00, "pci_bus_write_config_word" },
	{ 0x38c954bc, "pci_bus_read_config_word" },
	{ 0x57fd37be, "mii_check_media" },
	{ 0x274e9c9b, "dev_kfree_skb_irq" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf873629b, "x86_dma_fallback_dev" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x2a83cf39, "netif_carrier_off" },
	{ 0xf9a482f9, "msleep" },
	{ 0x51c2c913, "__netif_schedule" },
	{ 0xc1a24d78, "__napi_complete" },
	{ 0x5aacac07, "napi_gro_flush" },
	{ 0xfabc9763, "napi_gro_receive" },
	{ 0xe7390cd6, "eth_type_trans" },
	{ 0xfac00f33, "skb_put" },
	{ 0xbb0ebf03, "kfree_skb" },
	{ 0x5527e834, "__netdev_alloc_skb" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x3d81b477, "consume_skb" },
	{ 0x33c11279, "generic_mii_ioctl" },
	{ 0x4e9797b9, "mii_ethtool_gset" },
	{ 0xc41137a6, "mii_ethtool_sset" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5ff5024, "mii_nway_restart" },
	{ 0x43261dca, "_raw_spin_lock_irq" },
	{ 0xf15b2d04, "free_netdev" },
	{ 0x24cbdf32, "dev_set_drvdata" },
	{ 0xeb560280, "pci_disable_device" },
	{ 0xb9a42c72, "pci_clear_mwi" },
	{ 0x5f39b0d8, "pci_release_regions" },
	{ 0x2d2ba501, "pci_set_power_state" },
	{ 0xedc03953, "iounmap" },
	{ 0x4a9a412a, "unregister_netdev" },
	{ 0x64b410e1, "dev_get_drvdata" },
	{ 0x27e1a049, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xba9eb9d3, "dma_ops" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xcd3a6fb3, "netdev_err" },
	{ 0xd0ee38b8, "schedule_timeout_uninterruptible" },
	{ 0xfaf98462, "bitrev32" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0x78764f4e, "pv_irq_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000357d0000000Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "38B02BF4238000BBF5D6E90");
