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
	{ 0x4a9a412a, "unregister_netdev" },
	{ 0xfb5f846a, "cancel_delayed_work_sync" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x672144bd, "strlcpy" },
	{ 0x8da78cc2, "request_firmware" },
	{ 0x7a172b67, "kmem_cache_alloc_trace" },
	{ 0xfc8c370d, "kmem_cache_alloc_node_trace" },
	{ 0x4d884691, "malloc_sizes" },
	{ 0x770b4cea, "__pm_runtime_idle" },
	{ 0xf20dabd8, "free_irq" },
	{ 0xc2cdbf1, "synchronize_sched" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2d2ba501, "pci_set_power_state" },
	{ 0x9497cdca, "pci_wake_from_d3" },
	{ 0xdd49b096, "pci_clear_master" },
	{ 0x2288378f, "system_state" },
	{ 0x3f96355e, "netif_device_detach" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf10744eb, "__napi_schedule" },
	{ 0x898d3f44, "netif_device_attach" },
	{ 0xf866bc03, "skb_checksum_help" },
	{ 0x1232226d, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0xca9e5af, "napi_complete" },
	{ 0xfabc9763, "napi_gro_receive" },
	{ 0xe7390cd6, "eth_type_trans" },
	{ 0x5527e834, "__netdev_alloc_skb" },
	{ 0x3d81b477, "consume_skb" },
	{ 0xf1bea6f1, "schedule_delayed_work" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xf873629b, "x86_dma_fallback_dev" },
	{ 0xf15b2d04, "free_netdev" },
	{ 0xeb560280, "pci_disable_device" },
	{ 0xb9a42c72, "pci_clear_mwi" },
	{ 0x5f39b0d8, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcbe1db9f, "pci_disable_msi" },
	{ 0xdef1c3a3, "netif_napi_del" },
	{ 0xceef7962, "pci_dev_run_wake" },
	{ 0x24cbdf32, "dev_set_drvdata" },
	{ 0x69a2274d, "register_netdev" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0xa7453353, "netif_napi_add" },
	{ 0xe6671df3, "pci_enable_msi_block" },
	{ 0x49fadb13, "pci_set_master" },
	{ 0x42c8de35, "ioremap_nocache" },
	{ 0x6676e3e5, "dma_set_mask" },
	{ 0xe67d9c7, "pci_request_regions" },
	{ 0x95ddc903, "pci_set_mwi" },
	{ 0xcd3a6fb3, "netdev_err" },
	{ 0xc1211685, "pci_enable_device" },
	{ 0xc6f66d41, "pci_disable_link_state" },
	{ 0xe47f3fac, "dev_err" },
	{ 0xc70195f6, "alloc_etherdev_mqs" },
	{ 0xf9a482f9, "msleep" },
	{ 0x51c2c913, "__netif_schedule" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0x39246f9e, "skb_pad" },
	{ 0xfac00f33, "skb_put" },
	{ 0x2afedcf8, "pm_schedule_suspend" },
	{ 0x2a83cf39, "netif_carrier_off" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x3c909031, "netif_carrier_on" },
	{ 0x64093a35, "__pm_runtime_resume" },
	{ 0xd5f2172f, "del_timer_sync" },
	{ 0xfaf98462, "bitrev32" },
	{ 0x92ea4ae4, "crc32_le" },
	{ 0xeb08744c, "netdev_notice" },
	{ 0xa149f90b, "netdev_update_features" },
	{ 0x2b021c00, "pci_bus_write_config_word" },
	{ 0x38c954bc, "pci_bus_read_config_word" },
	{ 0x4e9797b9, "mii_ethtool_gset" },
	{ 0xe914e41e, "strcpy" },
	{ 0x396bb56b, "device_set_wakeup_enable" },
	{ 0x27e1a049, "printk" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x8834396c, "mod_timer" },
	{ 0x7d11c268, "jiffies" },
	{ 0x43261dca, "_raw_spin_lock_irq" },
	{ 0xa1d283e4, "pci_bus_write_config_byte" },
	{ 0xba9eb9d3, "dma_ops" },
	{ 0xc6eecb7, "netdev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8568e6eb, "netdev_info" },
	{ 0x64b410e1, "dev_get_drvdata" },
	{ 0x78764f4e, "pv_irq_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");

MODULE_INFO(srcversion, "393467378C98C0C8AE6FAF2");
