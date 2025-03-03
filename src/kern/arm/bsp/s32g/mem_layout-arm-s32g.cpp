INTERFACE [arm && pf_s32g]: //----------------------------------------------

EXTENSION class Mem_layout
{
public:
  enum Phys_layout_s32g : Address
  {
    Gic_dist_phys_base   = 0x50800000,
    Gic_redist_phys_base = 0x50880000,
    Gic_redist_size      =   0x200000,
    Gic_h_phys_base      = 0x50410000,
    Gic_v_phys_base      = 0x50420000,
  };
};
