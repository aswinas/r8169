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
	{ 0xf59f197, "param_array_ops" },
	{ 0x3ec8886f, "param_ops_int" },
	{ 0xd48c94a0, "eth_change_mtu" },
	{ 0x8b2fe2f6, "eth_validate_addr" },
	{ 0xb1b13d8f, "pci_unregister_driver" },
	{ 0x87d591c5, "__pci_register_driver" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xba63339c, "_raw_spin_unlock_bh" },
	{ 0x1637ff0f, "_raw_spin_lock_bh" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x898d3f44, "netif_device_attach" },
	{ 0xd6247222, "pci_restore_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf10744eb, "__napi_schedule" },
	{ 0xcd3a6fb3, "netdev_err" },
	{ 0x2b021c00, "pci_bus_write_config_word" },
	{ 0x38c954bc, "pci_bus_read_config_word" },
	{ 0x57fd37be, "mii_check_media" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x51c2c913, "__netif_schedule" },
	{ 0xf873629b, "x86_dma_fallback_dev" },
	{ 0xba9eb9d3, "dma_ops" },
	{ 0xf1bea6f1, "schedule_delayed_work" },
	{ 0x8568e6eb, "netdev_info" },
	{ 0x69a2274d, "register_netdev" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xa7453353, "netif_napi_add" },
	{ 0x55b27fd, "pci_iomap" },
	{ 0x49fadb13, "pci_set_master" },
	{ 0xe67d9c7, "pci_request_regions" },
	{ 0xc1211685, "pci_enable_device" },
	{ 0xe47f3fac, "dev_err" },
	{ 0xc70195f6, "alloc_etherdev_mqs" },
	{ 0xe326a839, "_dev_info" },
	{ 0x3d81b477, "consume_skb" },
	{ 0x37ecf0a5, "skb_copy_and_csum_dev" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x33c11279, "generic_mii_ioctl" },
	{ 0x4e9797b9, "mii_ethtool_gset" },
	{ 0xc41137a6, "mii_ethtool_sset" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5ff5024, "mii_nway_restart" },
	{ 0xf66e702a, "mii_link_ok" },
	{ 0xc1a24d78, "__napi_complete" },
	{ 0xc6eecb7, "netdev_warn" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xcbe9f889, "netif_receive_skb" },
	{ 0xe7390cd6, "eth_type_trans" },
	{ 0xfac00f33, "skb_put" },
	{ 0x5527e834, "__netdev_alloc_skb" },
	{ 0x7d11c268, "jiffies" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x43261dca, "_raw_spin_lock_irq" },
	{ 0xeb560280, "pci_disable_device" },
	{ 0x4a9a412a, "unregister_netdev" },
	{ 0xfb5f846a, "cancel_delayed_work_sync" },
	{ 0x24cbdf32, "dev_set_drvdata" },
	{ 0xf15b2d04, "free_netdev" },
	{ 0x5f39b0d8, "pci_release_regions" },
	{ 0xa22e0767, "pci_iounmap" },
	{ 0x27e1a049, "printk" },
	{ 0x2d2ba501, "pci_set_power_state" },
	{ 0x3f96355e, "netif_device_detach" },
	{ 0x1309496e, "pci_save_state" },
	{ 0x64b410e1, "dev_get_drvdata" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x436c2179, "iowrite32" },
	{ 0xfaf98462, "bitrev32" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8c183cbe, "iowrite16" },
	{ 0xc5534d64, "ioread16" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf10de535, "ioread8" },
	{ 0x727c4f3, "iowrite8" },
	{ 0x78764f4e, "pv_irq_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008138sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001500d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004033d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A117sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A11Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB07sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011DBd00001234sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00009130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000002ACd00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000018Ad00000106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Cd00001211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001743d00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000021Bd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv000010ECsd00008139bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv00001186sd00001300bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv000013D1sd0000AB06bc*sc*i*");

MODULE_INFO(srcversion, "332752D489018983D839F64");
