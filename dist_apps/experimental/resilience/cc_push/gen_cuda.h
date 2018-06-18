#pragma once
#include "galois/runtime/DataCommMode.h"
#include "galois/cuda/HostDecls.h"

void get_bitset_comp_current_cuda(struct CUDA_Context* ctx,
                                  unsigned long long int* bitset_compute);
void bitset_comp_current_reset_cuda(struct CUDA_Context* ctx);
void bitset_comp_current_reset_cuda(struct CUDA_Context* ctx, size_t begin,
                                    size_t end);
uint32_t get_node_comp_current_cuda(struct CUDA_Context* ctx, unsigned LID);
void set_node_comp_current_cuda(struct CUDA_Context* ctx, unsigned LID,
                                uint32_t v);
void add_node_comp_current_cuda(struct CUDA_Context* ctx, unsigned LID,
                                uint32_t v);
bool min_node_comp_current_cuda(struct CUDA_Context* ctx, unsigned LID,
                                uint32_t v);
void batch_get_node_comp_current_cuda(struct CUDA_Context* ctx,
                                      unsigned from_id, uint32_t* v);
void batch_get_node_comp_current_cuda(struct CUDA_Context* ctx,
                                      unsigned from_id,
                                      unsigned long long int* bitset_comm,
                                      unsigned int* offsets, uint32_t* v,
                                      size_t* v_size, DataCommMode* data_mode);
void batch_get_mirror_node_comp_current_cuda(struct CUDA_Context* ctx,
                                             unsigned from_id, uint32_t* v);
void batch_get_mirror_node_comp_current_cuda(
    struct CUDA_Context* ctx, unsigned from_id,
    unsigned long long int* bitset_comm, unsigned int* offsets, uint32_t* v,
    size_t* v_size, DataCommMode* data_mode);
void batch_get_reset_node_comp_current_cuda(struct CUDA_Context* ctx,
                                            unsigned from_id, uint32_t* v,
                                            uint32_t i);
void batch_get_reset_node_comp_current_cuda(
    struct CUDA_Context* ctx, unsigned from_id,
    unsigned long long int* bitset_comm, unsigned int* offsets, uint32_t* v,
    size_t* v_size, DataCommMode* data_mode, uint32_t i);
void batch_set_mirror_node_comp_current_cuda(
    struct CUDA_Context* ctx, unsigned from_id,
    unsigned long long int* bitset_comm, unsigned int* offsets, uint32_t* v,
    size_t v_size, DataCommMode data_mode);
void batch_set_node_comp_current_cuda(struct CUDA_Context* ctx,
                                      unsigned from_id,
                                      unsigned long long int* bitset_comm,
                                      unsigned int* offsets, uint32_t* v,
                                      size_t v_size, DataCommMode data_mode);
void batch_add_node_comp_current_cuda(struct CUDA_Context* ctx,
                                      unsigned from_id,
                                      unsigned long long int* bitset_comm,
                                      unsigned int* offsets, uint32_t* v,
                                      size_t v_size, DataCommMode data_mode);
void batch_min_node_comp_current_cuda(struct CUDA_Context* ctx,
                                      unsigned from_id,
                                      unsigned long long int* bitset_comm,
                                      unsigned int* offsets, uint32_t* v,
                                      size_t v_size, DataCommMode data_mode);

void bitset_comp_old_clear_cuda(struct CUDA_Context* ctx);
uint32_t get_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned LID);
void set_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned LID, uint32_t v);
void add_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned LID, uint32_t v);
bool min_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned LID, uint32_t v);
void batch_get_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned from_id,
                                  uint32_t* v);
void batch_get_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned from_id,
                                  unsigned long long int* bitset_comm,
                                  unsigned int* offsets, uint32_t* v,
                                  size_t* v_size, DataCommMode* data_mode);
void batch_get_mirror_node_comp_old_cuda(struct CUDA_Context* ctx,
                                         unsigned from_id, uint32_t* v);
void batch_get_mirror_node_comp_old_cuda(struct CUDA_Context* ctx,
                                         unsigned from_id,
                                         unsigned long long int* bitset_comm,
                                         unsigned int* offsets, uint32_t* v,
                                         size_t* v_size,
                                         DataCommMode* data_mode);
void batch_get_reset_node_comp_old_cuda(struct CUDA_Context* ctx,
                                        unsigned from_id, uint32_t* v,
                                        uint32_t i);
void batch_get_reset_node_comp_old_cuda(struct CUDA_Context* ctx,
                                        unsigned from_id,
                                        unsigned long long int* bitset_comm,
                                        unsigned int* offsets, uint32_t* v,
                                        size_t* v_size, DataCommMode* data_mode,
                                        uint32_t i);
void batch_set_mirror_node_comp_old_cuda(struct CUDA_Context* ctx,
                                         unsigned from_id,
                                         unsigned long long int* bitset_comm,
                                         unsigned int* offsets, uint32_t* v,
                                         size_t v_size, DataCommMode data_mode);
void batch_set_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned from_id,
                                  unsigned long long int* bitset_comm,
                                  unsigned int* offsets, uint32_t* v,
                                  size_t v_size, DataCommMode data_mode);
void batch_add_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned from_id,
                                  unsigned long long int* bitset_comm,
                                  unsigned int* offsets, uint32_t* v,
                                  size_t v_size, DataCommMode data_mode);
void batch_min_node_comp_old_cuda(struct CUDA_Context* ctx, unsigned from_id,
                                  unsigned long long int* bitset_comm,
                                  unsigned int* offsets, unsigned int* v,
                                  size_t v_size, DataCommMode data_mode);

void ConnectedCompSanityCheck_cuda(unsigned int& sum, struct CUDA_Context* ctx);
void ConnectedComp_cuda(unsigned int __begin, unsigned int __end, int& __retval,
                        struct CUDA_Context* ctx);
void ConnectedComp_all_cuda(int& __retval, struct CUDA_Context* ctx);
void FirstItr_ConnectedComp_cuda(unsigned int __begin, unsigned int __end,
                                 struct CUDA_Context* ctx);
void FirstItr_ConnectedComp_all_cuda(struct CUDA_Context* ctx);
void InitializeGraph_cuda(unsigned int __begin, unsigned int __end,
                          struct CUDA_Context* ctx);
void InitializeGraph_all_cuda(struct CUDA_Context* ctx);
