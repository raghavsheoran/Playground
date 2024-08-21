	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 14, 0	sdk_version 14, 5
	.globl	__Z4testv                       ## -- Begin function _Z4testv
	.p2align	4, 0x90
__Z4testv:                              ## @_Z4testv
Lfunc_begin0:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception0
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r12
	pushq	%rbx
	subq	$80, %rsp
	.cfi_offset %rbx, -48
	.cfi_offset %r12, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	movq	__ZNSt3__13cinE@GOTPCREL(%rip), %rbx
	leaq	-52(%rbp), %rsi
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	leaq	-48(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	leaq	-44(%rbp), %rsi
	movq	%rax, %rdi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	movw	$19458, -104(%rbp)              ## imm = 0x4C02
	movb	$0, -102(%rbp)
	xorps	%xmm0, %xmm0
	movaps	%xmm0, -80(%rbp)
	movq	$0, -64(%rbp)
Ltmp0:
	leaq	-80(%rbp), %rsi
	movq	%rbx, %rdi
	callq	__ZNSt3__1rsB8ue170006IcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EE
Ltmp1:
## %bb.1:
	movzbl	-80(%rbp), %edx
	testb	$1, %dl
	je	LBB0_2
## %bb.3:
	movq	-64(%rbp), %rsi
	movq	-72(%rbp), %rdx
	jmp	LBB0_4
LBB0_2:
	shrq	%rdx
	leaq	-79(%rbp), %rsi
LBB0_4:
Ltmp2:
	leaq	-104(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
Ltmp3:
## %bb.5:
Ltmp4:
	leaq	L_.str(%rip), %rsi
	leaq	-104(%rbp), %rdi
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
Ltmp5:
## %bb.6:
	movslq	-52(%rbp), %rcx
	testb	$1, -104(%rbp)
	je	LBB0_7
## %bb.8:
	movq	-88(%rbp), %rsi
	jmp	LBB0_9
LBB0_7:
	leaq	-103(%rbp), %rsi
LBB0_9:
	movl	-48(%rbp), %r8d
	leal	1(%rcx), %r9d
	movq	%rcx, %r10
	incq	%r10
	movb	$1, %dil
	xorl	%r11d, %r11d
	xorl	%r14d, %r14d
	.p2align	4, 0x90
LBB0_10:                                ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB0_14 Depth 2
                                        ##     Child Loop BB0_17 Depth 2
                                        ##     Child Loop BB0_22 Depth 2
	cmpl	%ecx, %r14d
	jg	LBB0_32
## %bb.11:                              ##   in Loop: Header=BB0_10 Depth=1
	movslq	%r14d, %r15
	cmpb	$76, (%rsi,%r15)
	jne	LBB0_12
## %bb.13:                              ##   in Loop: Header=BB0_10 Depth=1
	leal	(%r8,%r14), %eax
	cmpl	%eax, %r9d
	cmovll	%r9d, %eax
	cltq
	leal	1(%rax), %edx
	leaq	(%rsi,%rax), %r12
	movl	%edx, %ebx
	.p2align	4, 0x90
LBB0_14:                                ##   Parent Loop BB0_10 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	decl	%ebx
	cmpb	$76, (%r12)
	leaq	-1(%r12), %r12
	jne	LBB0_14
## %bb.15:                              ##   in Loop: Header=BB0_10 Depth=1
	cmpl	%ebx, %r14d
	jne	LBB0_19
## %bb.16:                              ##   in Loop: Header=BB0_10 Depth=1
	movl	%edx, %ebx
	.p2align	4, 0x90
LBB0_17:                                ##   Parent Loop BB0_10 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	decl	%ebx
	cmpb	$87, (%rsi,%rax)
	je	LBB0_19
## %bb.18:                              ##   in Loop: Header=BB0_17 Depth=2
	leaq	-1(%rax), %rdx
	cmpq	%r15, %rax
	movq	%rdx, %rax
	jg	LBB0_17
LBB0_19:                                ##   in Loop: Header=BB0_10 Depth=1
	movzbl	%dil, %edi
	cmpl	%r14d, %ebx
	cmovel	%r11d, %edi
	je	LBB0_32
## %bb.20:                              ##   in Loop: Header=BB0_10 Depth=1
	cmpl	%r9d, %ebx
	jne	LBB0_21
	jmp	LBB0_32
	.p2align	4, 0x90
LBB0_12:                                ##   in Loop: Header=BB0_10 Depth=1
	movl	%r14d, %ebx
LBB0_21:                                ##   in Loop: Header=BB0_10 Depth=1
	movslq	%ebx, %rdx
	movq	%r10, %r14
	subq	%rdx, %r14
	addq	%rsi, %rdx
	xorl	%eax, %eax
	.p2align	4, 0x90
LBB0_22:                                ##   Parent Loop BB0_10 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	cmpb	$87, (%rdx,%rax)
	jne	LBB0_27
## %bb.23:                              ##   in Loop: Header=BB0_22 Depth=2
	movl	-44(%rbp), %r15d
	testl	%r15d, %r15d
	jle	LBB0_26
## %bb.24:                              ##   in Loop: Header=BB0_22 Depth=2
	decl	%r15d
	movl	%r15d, -44(%rbp)
	incq	%rax
	cmpq	%rax, %r14
	jne	LBB0_22
## %bb.25:                              ##   in Loop: Header=BB0_10 Depth=1
	movl	%r9d, %r14d
	testb	$1, %dil
	jne	LBB0_30
	jmp	LBB0_32
	.p2align	4, 0x90
LBB0_27:                                ##   in Loop: Header=BB0_10 Depth=1
	addl	%eax, %ebx
	jmp	LBB0_28
	.p2align	4, 0x90
LBB0_26:                                ##   in Loop: Header=BB0_10 Depth=1
	addl	%eax, %ebx
	xorl	%edi, %edi
LBB0_28:                                ##   in Loop: Header=BB0_10 Depth=1
	movl	%ebx, %r14d
	testb	$1, %dil
	je	LBB0_32
LBB0_30:                                ##   in Loop: Header=BB0_10 Depth=1
	movslq	%r14d, %rax
	cmpb	$67, (%rsi,%rax)
	jne	LBB0_10
## %bb.31:
	xorl	%edi, %edi
LBB0_32:
	testb	$1, %dil
	jne	LBB0_33
## %bb.48:
Ltmp23:
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	leaq	L_.str.2(%rip), %rsi
	movl	$2, %edx
	callq	__ZNSt3__124__put_character_sequenceB8ue170006IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Ltmp24:
## %bb.49:
	movq	%rax, %rbx
	movq	(%rax), %rax
	movq	-24(%rax), %rsi
	addq	%rbx, %rsi
Ltmp25:
	leaq	-40(%rbp), %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp26:
## %bb.50:
Ltmp27:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	leaq	-40(%rbp), %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp28:
## %bb.51:
	movq	(%rax), %rcx
Ltmp29:
	movq	%rax, %rdi
	movl	$10, %esi
	callq	*56(%rcx)
Ltmp30:
## %bb.52:
Ltmp35:
	movl	%eax, %r14d
	leaq	-40(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp36:
## %bb.53:
Ltmp37:
	movsbl	%r14b, %esi
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
Ltmp38:
	jmp	LBB0_39
LBB0_33:
Ltmp7:
	movq	__ZNSt3__14coutE@GOTPCREL(%rip), %rdi
	leaq	L_.str.1(%rip), %rsi
	movl	$3, %edx
	callq	__ZNSt3__124__put_character_sequenceB8ue170006IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Ltmp8:
## %bb.34:
	movq	%rax, %rbx
	movq	(%rax), %rax
	movq	-24(%rax), %rsi
	addq	%rbx, %rsi
Ltmp9:
	leaq	-40(%rbp), %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp10:
## %bb.35:
Ltmp11:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	leaq	-40(%rbp), %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp12:
## %bb.36:
	movq	(%rax), %rcx
Ltmp13:
	movq	%rax, %rdi
	movl	$10, %esi
	callq	*56(%rcx)
Ltmp14:
## %bb.37:
Ltmp19:
	movl	%eax, %r14d
	leaq	-40(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp20:
## %bb.38:
Ltmp21:
	movsbl	%r14b, %esi
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE3putEc
Ltmp22:
LBB0_39:
Ltmp39:
	movq	%rbx, %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5flushEv
Ltmp40:
## %bb.40:
	testb	$1, -80(%rbp)
	je	LBB0_42
## %bb.41:
	movq	-64(%rbp), %rdi
	callq	__ZdlPv
LBB0_42:
	testb	$1, -104(%rbp)
	je	LBB0_44
## %bb.43:
	movq	-88(%rbp), %rdi
	callq	__ZdlPv
LBB0_44:
	addq	$80, %rsp
	popq	%rbx
	popq	%r12
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB0_45:
Ltmp15:
	movq	%rax, %rbx
Ltmp16:
	leaq	-40(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp17:
	jmp	LBB0_58
LBB0_46:
Ltmp18:
	movq	%rax, %rdi
	callq	___clang_call_terminate
LBB0_54:
Ltmp31:
	movq	%rax, %rbx
Ltmp32:
	leaq	-40(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp33:
	jmp	LBB0_58
LBB0_55:
Ltmp34:
	movq	%rax, %rdi
	callq	___clang_call_terminate
LBB0_56:
Ltmp6:
	jmp	LBB0_57
LBB0_47:
Ltmp41:
LBB0_57:
	movq	%rax, %rbx
LBB0_58:
	testb	$1, -80(%rbp)
	jne	LBB0_59
## %bb.60:
	testb	$1, -104(%rbp)
	jne	LBB0_61
LBB0_62:
	movq	%rbx, %rdi
	callq	__Unwind_Resume
LBB0_59:
	movq	-64(%rbp), %rdi
	callq	__ZdlPv
	testb	$1, -104(%rbp)
	je	LBB0_62
LBB0_61:
	movq	-88(%rbp), %rdi
	callq	__ZdlPv
	movq	%rbx, %rdi
	callq	__Unwind_Resume
Lfunc_end0:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table0:
Lexception0:
	.byte	255                             ## @LPStart Encoding = omit
	.byte	155                             ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase0-Lttbaseref0
Lttbaseref0:
	.byte	1                               ## Call site Encoding = uleb128
	.uleb128 Lcst_end0-Lcst_begin0
Lcst_begin0:
	.uleb128 Lfunc_begin0-Lfunc_begin0      ## >> Call Site 1 <<
	.uleb128 Ltmp0-Lfunc_begin0             ##   Call between Lfunc_begin0 and Ltmp0
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp0-Lfunc_begin0             ## >> Call Site 2 <<
	.uleb128 Ltmp5-Ltmp0                    ##   Call between Ltmp0 and Ltmp5
	.uleb128 Ltmp6-Lfunc_begin0             ##     jumps to Ltmp6
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp23-Lfunc_begin0            ## >> Call Site 3 <<
	.uleb128 Ltmp26-Ltmp23                  ##   Call between Ltmp23 and Ltmp26
	.uleb128 Ltmp41-Lfunc_begin0            ##     jumps to Ltmp41
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp27-Lfunc_begin0            ## >> Call Site 4 <<
	.uleb128 Ltmp30-Ltmp27                  ##   Call between Ltmp27 and Ltmp30
	.uleb128 Ltmp31-Lfunc_begin0            ##     jumps to Ltmp31
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp35-Lfunc_begin0            ## >> Call Site 5 <<
	.uleb128 Ltmp10-Ltmp35                  ##   Call between Ltmp35 and Ltmp10
	.uleb128 Ltmp41-Lfunc_begin0            ##     jumps to Ltmp41
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp11-Lfunc_begin0            ## >> Call Site 6 <<
	.uleb128 Ltmp14-Ltmp11                  ##   Call between Ltmp11 and Ltmp14
	.uleb128 Ltmp15-Lfunc_begin0            ##     jumps to Ltmp15
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp19-Lfunc_begin0            ## >> Call Site 7 <<
	.uleb128 Ltmp40-Ltmp19                  ##   Call between Ltmp19 and Ltmp40
	.uleb128 Ltmp41-Lfunc_begin0            ##     jumps to Ltmp41
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp16-Lfunc_begin0            ## >> Call Site 8 <<
	.uleb128 Ltmp17-Ltmp16                  ##   Call between Ltmp16 and Ltmp17
	.uleb128 Ltmp18-Lfunc_begin0            ##     jumps to Ltmp18
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp32-Lfunc_begin0            ## >> Call Site 9 <<
	.uleb128 Ltmp33-Ltmp32                  ##   Call between Ltmp32 and Ltmp33
	.uleb128 Ltmp34-Lfunc_begin0            ##     jumps to Ltmp34
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp33-Lfunc_begin0            ## >> Call Site 10 <<
	.uleb128 Lfunc_end0-Ltmp33              ##   Call between Ltmp33 and Lfunc_end0
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
Lcst_end0:
	.byte	1                               ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                               ##   No further actions
	.p2align	2, 0x0
                                        ## >> Catch TypeInfos <<
	.long	0                               ## TypeInfo 1
Lttbase0:
	.p2align	2, 0x0
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	__ZNSt3__1rsB8ue170006IcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EE ## -- Begin function _ZNSt3__1rsB8ue170006IcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EE
	.globl	__ZNSt3__1rsB8ue170006IcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EE
	.weak_def_can_be_hidden	__ZNSt3__1rsB8ue170006IcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EE
	.p2align	4, 0x90
__ZNSt3__1rsB8ue170006IcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EE: ## @_ZNSt3__1rsB8ue170006IcNS_11char_traitsIcEENS_9allocatorIcEEEERNS_13basic_istreamIT_T0_EES9_RNS_12basic_stringIS6_S7_T1_EE
Lfunc_begin1:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception1
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset %rbx, -56
	.cfi_offset %r12, -48
	.cfi_offset %r13, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	movq	%rsi, %r14
	movq	%rdi, %rbx
	leaq	-48(%rbp), %rdi
	movq	%rbx, %rsi
	xorl	%edx, %edx
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b
	cmpb	$0, -48(%rbp)
	je	LBB1_25
## %bb.1:
	testb	$1, (%r14)
	jne	LBB1_3
## %bb.2:
	movw	$0, (%r14)
	jmp	LBB1_4
LBB1_3:
	movq	16(%r14), %rax
	movb	$0, (%rax)
	movq	$0, 8(%r14)
LBB1_4:
	movq	(%rbx), %rax
	movq	-24(%rax), %rcx
	movq	24(%rbx,%rcx), %rcx
	testq	%rcx, %rcx
	movabsq	$9223372036854775807, %r13      ## imm = 0x7FFFFFFFFFFFFFFF
	cmovgq	%rcx, %r13
	movq	-24(%rax), %rsi
	addq	%rbx, %rsi
Ltmp42:
	leaq	-56(%rbp), %rdi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp43:
## %bb.5:
Ltmp44:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	leaq	-56(%rbp), %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
	movq	%rax, -64(%rbp)                 ## 8-byte Spill
Ltmp45:
## %bb.6:
Ltmp49:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp50:
## %bb.7:
	movq	%r14, -72(%rbp)                 ## 8-byte Spill
	xorl	%r12d, %r12d
	xorl	%r15d, %r15d
	jmp	LBB1_11
	.p2align	4, 0x90
LBB1_8:                                 ##   in Loop: Header=BB1_11 Depth=1
	orl	$2, %r15d
LBB1_9:                                 ##   in Loop: Header=BB1_11 Depth=1
	xorl	%r14d, %r14d
LBB1_10:                                ##   in Loop: Header=BB1_11 Depth=1
	testb	%r14b, %r14b
	je	LBB1_23
LBB1_11:                                ## =>This Inner Loop Header: Depth=1
	cmpq	%r13, %r12
	jge	LBB1_23
## %bb.12:                              ##   in Loop: Header=BB1_11 Depth=1
	movq	(%rbx), %rax
	movq	-24(%rax), %rax
	movq	40(%rbx,%rax), %rdi
	movq	24(%rdi), %rax
	cmpq	32(%rdi), %rax
	je	LBB1_14
## %bb.13:                              ##   in Loop: Header=BB1_11 Depth=1
	movzbl	(%rax), %eax
	jmp	LBB1_15
	.p2align	4, 0x90
LBB1_14:                                ##   in Loop: Header=BB1_11 Depth=1
	movq	(%rdi), %rax
Ltmp52:
	callq	*72(%rax)
Ltmp53:
LBB1_15:                                ##   in Loop: Header=BB1_11 Depth=1
	cmpl	$-1, %eax
	je	LBB1_8
## %bb.16:                              ##   in Loop: Header=BB1_11 Depth=1
	testb	%al, %al
	js	LBB1_18
## %bb.17:                              ##   in Loop: Header=BB1_11 Depth=1
	movq	-64(%rbp), %rcx                 ## 8-byte Reload
	movq	16(%rcx), %rcx
	movsbq	%al, %rdx
	testb	$64, 1(%rcx,%rdx,4)
	jne	LBB1_9
LBB1_18:                                ##   in Loop: Header=BB1_11 Depth=1
Ltmp55:
	movsbl	%al, %esi
	movq	-72(%rbp), %rdi                 ## 8-byte Reload
	callq	__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
Ltmp56:
## %bb.19:                              ##   in Loop: Header=BB1_11 Depth=1
	incq	%r12
	movq	(%rbx), %rax
	movq	-24(%rax), %rax
	movq	40(%rbx,%rax), %rdi
	movq	24(%rdi), %rax
	cmpq	32(%rdi), %rax
	je	LBB1_22
## %bb.20:                              ##   in Loop: Header=BB1_11 Depth=1
	incq	%rax
	movq	%rax, 24(%rdi)
	movb	$1, %r14b
	jmp	LBB1_10
LBB1_22:                                ##   in Loop: Header=BB1_11 Depth=1
	movq	(%rdi), %rax
	movb	$1, %r14b
Ltmp57:
	callq	*80(%rax)
Ltmp58:
	jmp	LBB1_10
LBB1_23:
	movq	(%rbx), %rax
	movq	-24(%rax), %rax
	movq	$0, 24(%rbx,%rax)
	movl	%r15d, %eax
	orl	$4, %eax
	testq	%r12, %r12
	cmovel	%eax, %r15d
LBB1_24:
	movq	(%rbx), %rax
	movq	-24(%rax), %rax
	leaq	(%rbx,%rax), %rdi
	orl	32(%rbx,%rax), %r15d
	movl	%r15d, %esi
	callq	__ZNSt3__18ios_base5clearEj
LBB1_25:
	movq	%rbx, %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB1_26:
Ltmp46:
	movq	%rax, %r14
Ltmp47:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp48:
## %bb.27:
	xorl	%r15d, %r15d
	jmp	LBB1_32
LBB1_28:
Ltmp51:
	movq	%rax, %r14
	xorl	%r15d, %r15d
	jmp	LBB1_32
LBB1_29:
Ltmp54:
	jmp	LBB1_31
LBB1_30:
Ltmp59:
LBB1_31:
	movq	%rax, %r14
LBB1_32:
	movq	%r14, %rdi
	callq	___cxa_begin_catch
	orl	$1, %r15d
	movq	(%rbx), %rax
	movq	-24(%rax), %rcx
	orl	%r15d, 32(%rbx,%rcx)
	movq	-24(%rax), %rax
	testb	$1, 36(%rbx,%rax)
	jne	LBB1_34
## %bb.33:
	callq	___cxa_end_catch
	jmp	LBB1_24
LBB1_34:
Ltmp60:
	callq	___cxa_rethrow
Ltmp61:
## %bb.35:
	ud2
LBB1_36:
Ltmp62:
	movq	%rax, %rbx
Ltmp63:
	callq	___cxa_end_catch
Ltmp64:
## %bb.37:
	movq	%rbx, %rdi
	callq	__Unwind_Resume
LBB1_38:
Ltmp65:
	movq	%rax, %rdi
	callq	___clang_call_terminate
Lfunc_end1:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table1:
Lexception1:
	.byte	255                             ## @LPStart Encoding = omit
	.byte	155                             ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase1-Lttbaseref1
Lttbaseref1:
	.byte	1                               ## Call site Encoding = uleb128
	.uleb128 Lcst_end1-Lcst_begin1
Lcst_begin1:
	.uleb128 Lfunc_begin1-Lfunc_begin1      ## >> Call Site 1 <<
	.uleb128 Ltmp42-Lfunc_begin1            ##   Call between Lfunc_begin1 and Ltmp42
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp42-Lfunc_begin1            ## >> Call Site 2 <<
	.uleb128 Ltmp43-Ltmp42                  ##   Call between Ltmp42 and Ltmp43
	.uleb128 Ltmp51-Lfunc_begin1            ##     jumps to Ltmp51
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp44-Lfunc_begin1            ## >> Call Site 3 <<
	.uleb128 Ltmp45-Ltmp44                  ##   Call between Ltmp44 and Ltmp45
	.uleb128 Ltmp46-Lfunc_begin1            ##     jumps to Ltmp46
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp49-Lfunc_begin1            ## >> Call Site 4 <<
	.uleb128 Ltmp50-Ltmp49                  ##   Call between Ltmp49 and Ltmp50
	.uleb128 Ltmp51-Lfunc_begin1            ##     jumps to Ltmp51
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp52-Lfunc_begin1            ## >> Call Site 5 <<
	.uleb128 Ltmp53-Ltmp52                  ##   Call between Ltmp52 and Ltmp53
	.uleb128 Ltmp54-Lfunc_begin1            ##     jumps to Ltmp54
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp55-Lfunc_begin1            ## >> Call Site 6 <<
	.uleb128 Ltmp58-Ltmp55                  ##   Call between Ltmp55 and Ltmp58
	.uleb128 Ltmp59-Lfunc_begin1            ##     jumps to Ltmp59
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp58-Lfunc_begin1            ## >> Call Site 7 <<
	.uleb128 Ltmp47-Ltmp58                  ##   Call between Ltmp58 and Ltmp47
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp47-Lfunc_begin1            ## >> Call Site 8 <<
	.uleb128 Ltmp48-Ltmp47                  ##   Call between Ltmp47 and Ltmp48
	.uleb128 Ltmp65-Lfunc_begin1            ##     jumps to Ltmp65
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp48-Lfunc_begin1            ## >> Call Site 9 <<
	.uleb128 Ltmp60-Ltmp48                  ##   Call between Ltmp48 and Ltmp60
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp60-Lfunc_begin1            ## >> Call Site 10 <<
	.uleb128 Ltmp61-Ltmp60                  ##   Call between Ltmp60 and Ltmp61
	.uleb128 Ltmp62-Lfunc_begin1            ##     jumps to Ltmp62
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp63-Lfunc_begin1            ## >> Call Site 11 <<
	.uleb128 Ltmp64-Ltmp63                  ##   Call between Ltmp63 and Ltmp64
	.uleb128 Ltmp65-Lfunc_begin1            ##     jumps to Ltmp65
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp64-Lfunc_begin1            ## >> Call Site 12 <<
	.uleb128 Lfunc_end1-Ltmp64              ##   Call between Ltmp64 and Lfunc_end1
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
Lcst_end1:
	.byte	1                               ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                               ##   No further actions
	.p2align	2, 0x0
                                        ## >> Catch TypeInfos <<
	.long	0                               ## TypeInfo 1
Lttbase1:
	.p2align	2, 0x0
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	___clang_call_terminate ## -- Begin function __clang_call_terminate
	.globl	___clang_call_terminate
	.weak_def_can_be_hidden	___clang_call_terminate
	.p2align	4, 0x90
___clang_call_terminate:                ## @__clang_call_terminate
## %bb.0:
	pushq	%rax
	callq	___cxa_begin_catch
	callq	__ZSt9terminatev
                                        ## -- End function
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%rbx
	pushq	%rax
	.cfi_offset %rbx, -24
	xorl	%ebx, %ebx
	xorl	%edi, %edi
	callq	__ZNSt3__18ios_base15sync_with_stdioEb
	movq	__ZNSt3__13cinE@GOTPCREL(%rip), %rdi
	movq	(%rdi), %rax
	movq	-24(%rax), %rax
	movq	$0, 136(%rdi,%rax)
	leaq	-12(%rbp), %rsi
	callq	__ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi
	cmpl	$0, -12(%rbp)
	jle	LBB3_2
	.p2align	4, 0x90
LBB3_1:                                 ## =>This Inner Loop Header: Depth=1
	callq	__Z4testv
	incl	%ebx
	cmpl	-12(%rbp), %ebx
	jl	LBB3_1
LBB3_2:
	xorl	%eax, %eax
	addq	$8, %rsp
	popq	%rbx
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.private_extern	__ZNSt3__124__put_character_sequenceB8ue170006IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m ## -- Begin function _ZNSt3__124__put_character_sequenceB8ue170006IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.globl	__ZNSt3__124__put_character_sequenceB8ue170006IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.weak_def_can_be_hidden	__ZNSt3__124__put_character_sequenceB8ue170006IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
	.p2align	4, 0x90
__ZNSt3__124__put_character_sequenceB8ue170006IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m: ## @_ZNSt3__124__put_character_sequenceB8ue170006IcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m
Lfunc_begin2:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception2
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset %rbx, -56
	.cfi_offset %r12, -48
	.cfi_offset %r13, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	movq	%rdx, %r14
	movq	%rsi, %r15
	movq	%rdi, %rbx
Ltmp66:
	leaq	-80(%rbp), %rdi
	movq	%rbx, %rsi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_
Ltmp67:
## %bb.1:
	cmpb	$0, -80(%rbp)
	je	LBB4_11
## %bb.2:
	movq	(%rbx), %rax
	movq	-24(%rax), %rax
	leaq	(%rbx,%rax), %r12
	movq	40(%rbx,%rax), %rdi
	movl	8(%rbx,%rax), %r13d
	cmpl	$-1, 144(%rbx,%rax)
	jne	LBB4_8
## %bb.3:
Ltmp68:
	movq	%rdi, -64(%rbp)                 ## 8-byte Spill
	leaq	-56(%rbp), %rdi
	movq	%r12, %rsi
	callq	__ZNKSt3__18ios_base6getlocEv
Ltmp69:
## %bb.4:
Ltmp70:
	movq	__ZNSt3__15ctypeIcE2idE@GOTPCREL(%rip), %rsi
	leaq	-56(%rbp), %rdi
	callq	__ZNKSt3__16locale9use_facetERNS0_2idE
Ltmp71:
## %bb.5:
	movq	(%rax), %rcx
Ltmp72:
	movq	%rax, %rdi
	movl	$32, %esi
	callq	*56(%rcx)
	movb	%al, -41(%rbp)                  ## 1-byte Spill
Ltmp73:
## %bb.6:
Ltmp78:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp79:
## %bb.7:
	movsbl	-41(%rbp), %eax                 ## 1-byte Folded Reload
	movl	%eax, 144(%r12)
	movq	-64(%rbp), %rdi                 ## 8-byte Reload
LBB4_8:
	movsbl	144(%r12), %r9d
	andl	$176, %r13d
	addq	%r15, %r14
	cmpl	$32, %r13d
	movq	%r15, %rdx
	cmoveq	%r14, %rdx
Ltmp80:
	movq	%r15, %rsi
	movq	%r14, %rcx
	movq	%r12, %r8
	callq	__ZNSt3__116__pad_and_outputB8ue170006IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Ltmp81:
## %bb.9:
	testq	%rax, %rax
	jne	LBB4_11
## %bb.10:
	movq	(%rbx), %rax
	movq	-24(%rax), %rax
	leaq	(%rbx,%rax), %rdi
	movl	32(%rbx,%rax), %esi
	orl	$5, %esi
Ltmp83:
	callq	__ZNSt3__18ios_base5clearEj
Ltmp84:
LBB4_11:
Ltmp88:
	leaq	-80(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp89:
LBB4_21:
	movq	%rbx, %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB4_16:
Ltmp85:
	jmp	LBB4_17
LBB4_12:
Ltmp74:
	movq	%rax, %r14
Ltmp75:
	leaq	-56(%rbp), %rdi
	callq	__ZNSt3__16localeD1Ev
Ltmp76:
	jmp	LBB4_18
LBB4_13:
Ltmp77:
	movq	%rax, %rdi
	callq	___clang_call_terminate
LBB4_15:
Ltmp82:
LBB4_17:
	movq	%rax, %r14
LBB4_18:
Ltmp86:
	leaq	-80(%rbp), %rdi
	callq	__ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev
Ltmp87:
	jmp	LBB4_19
LBB4_14:
Ltmp90:
	movq	%rax, %r14
LBB4_19:
	movq	%r14, %rdi
	callq	___cxa_begin_catch
	movq	(%rbx), %rax
	movq	-24(%rax), %rdi
	addq	%rbx, %rdi
Ltmp91:
	callq	__ZNSt3__18ios_base33__set_badbit_and_consider_rethrowEv
Ltmp92:
## %bb.20:
	callq	___cxa_end_catch
	jmp	LBB4_21
LBB4_22:
Ltmp93:
	movq	%rax, %rbx
Ltmp94:
	callq	___cxa_end_catch
Ltmp95:
## %bb.23:
	movq	%rbx, %rdi
	callq	__Unwind_Resume
LBB4_24:
Ltmp96:
	movq	%rax, %rdi
	callq	___clang_call_terminate
Lfunc_end2:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table4:
Lexception2:
	.byte	255                             ## @LPStart Encoding = omit
	.byte	155                             ## @TType Encoding = indirect pcrel sdata4
	.uleb128 Lttbase2-Lttbaseref2
Lttbaseref2:
	.byte	1                               ## Call site Encoding = uleb128
	.uleb128 Lcst_end2-Lcst_begin2
Lcst_begin2:
	.uleb128 Ltmp66-Lfunc_begin2            ## >> Call Site 1 <<
	.uleb128 Ltmp67-Ltmp66                  ##   Call between Ltmp66 and Ltmp67
	.uleb128 Ltmp90-Lfunc_begin2            ##     jumps to Ltmp90
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp68-Lfunc_begin2            ## >> Call Site 2 <<
	.uleb128 Ltmp69-Ltmp68                  ##   Call between Ltmp68 and Ltmp69
	.uleb128 Ltmp82-Lfunc_begin2            ##     jumps to Ltmp82
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp70-Lfunc_begin2            ## >> Call Site 3 <<
	.uleb128 Ltmp73-Ltmp70                  ##   Call between Ltmp70 and Ltmp73
	.uleb128 Ltmp74-Lfunc_begin2            ##     jumps to Ltmp74
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp78-Lfunc_begin2            ## >> Call Site 4 <<
	.uleb128 Ltmp81-Ltmp78                  ##   Call between Ltmp78 and Ltmp81
	.uleb128 Ltmp82-Lfunc_begin2            ##     jumps to Ltmp82
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp83-Lfunc_begin2            ## >> Call Site 5 <<
	.uleb128 Ltmp84-Ltmp83                  ##   Call between Ltmp83 and Ltmp84
	.uleb128 Ltmp85-Lfunc_begin2            ##     jumps to Ltmp85
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp88-Lfunc_begin2            ## >> Call Site 6 <<
	.uleb128 Ltmp89-Ltmp88                  ##   Call between Ltmp88 and Ltmp89
	.uleb128 Ltmp90-Lfunc_begin2            ##     jumps to Ltmp90
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp75-Lfunc_begin2            ## >> Call Site 7 <<
	.uleb128 Ltmp76-Ltmp75                  ##   Call between Ltmp75 and Ltmp76
	.uleb128 Ltmp77-Lfunc_begin2            ##     jumps to Ltmp77
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp86-Lfunc_begin2            ## >> Call Site 8 <<
	.uleb128 Ltmp87-Ltmp86                  ##   Call between Ltmp86 and Ltmp87
	.uleb128 Ltmp96-Lfunc_begin2            ##     jumps to Ltmp96
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp87-Lfunc_begin2            ## >> Call Site 9 <<
	.uleb128 Ltmp91-Ltmp87                  ##   Call between Ltmp87 and Ltmp91
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp91-Lfunc_begin2            ## >> Call Site 10 <<
	.uleb128 Ltmp92-Ltmp91                  ##   Call between Ltmp91 and Ltmp92
	.uleb128 Ltmp93-Lfunc_begin2            ##     jumps to Ltmp93
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp92-Lfunc_begin2            ## >> Call Site 11 <<
	.uleb128 Ltmp94-Ltmp92                  ##   Call between Ltmp92 and Ltmp94
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp94-Lfunc_begin2            ## >> Call Site 12 <<
	.uleb128 Ltmp95-Ltmp94                  ##   Call between Ltmp94 and Ltmp95
	.uleb128 Ltmp96-Lfunc_begin2            ##     jumps to Ltmp96
	.byte	1                               ##   On action: 1
	.uleb128 Ltmp95-Lfunc_begin2            ## >> Call Site 13 <<
	.uleb128 Lfunc_end2-Ltmp95              ##   Call between Ltmp95 and Lfunc_end2
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
Lcst_end2:
	.byte	1                               ## >> Action Record 1 <<
                                        ##   Catch TypeInfo 1
	.byte	0                               ##   No further actions
	.p2align	2, 0x0
                                        ## >> Catch TypeInfos <<
	.long	0                               ## TypeInfo 1
Lttbase2:
	.p2align	2, 0x0
                                        ## -- End function
	.section	__TEXT,__text,regular,pure_instructions
	.private_extern	__ZNSt3__116__pad_and_outputB8ue170006IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_ ## -- Begin function _ZNSt3__116__pad_and_outputB8ue170006IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.globl	__ZNSt3__116__pad_and_outputB8ue170006IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.weak_def_can_be_hidden	__ZNSt3__116__pad_and_outputB8ue170006IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
	.p2align	4, 0x90
__ZNSt3__116__pad_and_outputB8ue170006IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_: ## @_ZNSt3__116__pad_and_outputB8ue170006IcNS_11char_traitsIcEEEENS_19ostreambuf_iteratorIT_T0_EES6_PKS4_S8_S8_RNS_8ios_baseES4_
Lfunc_begin3:
	.cfi_startproc
	.cfi_personality 155, ___gxx_personality_v0
	.cfi_lsda 16, Lexception3
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	pushq	%r15
	pushq	%r14
	pushq	%r13
	pushq	%r12
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset %rbx, -56
	.cfi_offset %r12, -48
	.cfi_offset %r13, -40
	.cfi_offset %r14, -32
	.cfi_offset %r15, -24
	testq	%rdi, %rdi
	je	LBB5_21
## %bb.1:
	movq	%r8, %r15
	movq	%rcx, %r14
	movq	%rdi, %r13
	movl	%r9d, -68(%rbp)                 ## 4-byte Spill
	movq	%rcx, %rax
	subq	%rsi, %rax
	movq	24(%r8), %rcx
	xorl	%r12d, %r12d
	subq	%rax, %rcx
	cmovgq	%rcx, %r12
	movq	%rdx, %rbx
	subq	%rsi, %rbx
	testq	%rbx, %rbx
	movq	%r8, -80(%rbp)                  ## 8-byte Spill
	jle	LBB5_3
## %bb.2:
	movq	(%r13), %rax
	movq	%r13, %rdi
	movq	%r14, %r15
	movq	%rdx, %r14
	movq	%rbx, %rdx
	callq	*96(%rax)
	movq	%r14, %rdx
	movq	%r15, %r14
	movq	-80(%rbp), %r15                 ## 8-byte Reload
	cmpq	%rbx, %rax
	jne	LBB5_21
LBB5_3:
	testq	%r12, %r12
	jle	LBB5_8
## %bb.4:
	cmpq	$22, %r12
	movq	%rdx, -88(%rbp)                 ## 8-byte Spill
	ja	LBB5_9
## %bb.5:
	leal	(%r12,%r12), %eax
	movb	%al, -64(%rbp)
	leaq	-63(%rbp), %rbx
	jmp	LBB5_10
LBB5_8:
	movq	%r13, %rbx
	jmp	LBB5_17
LBB5_9:
	movq	%r12, %r15
	orq	$15, %r15
	leaq	1(%r15), %rdi
	callq	__Znwm
	movq	%rax, %rbx
	movq	%rax, -48(%rbp)
	addq	$2, %r15
	movq	%r15, -64(%rbp)
	movq	%r12, -56(%rbp)
LBB5_10:
	movzbl	-68(%rbp), %esi                 ## 1-byte Folded Reload
	movq	%rbx, %rdi
	movq	%r12, %rdx
	callq	_memset
	movb	$0, (%rbx,%r12)
	testb	$1, -64(%rbp)
	je	LBB5_12
## %bb.11:
	movq	-48(%rbp), %rsi
	jmp	LBB5_13
LBB5_12:
	leaq	-63(%rbp), %rsi
LBB5_13:
	movq	(%r13), %rax
Ltmp97:
	movq	%r13, %rdi
	movq	%r12, %rdx
	callq	*96(%rax)
Ltmp98:
## %bb.14:
	movq	%rax, %r15
	xorl	%ebx, %ebx
	cmpq	%r12, %rax
	cmoveq	%r13, %rbx
	testb	$1, -64(%rbp)
	je	LBB5_16
## %bb.15:
	movq	-48(%rbp), %rdi
	callq	__ZdlPv
LBB5_16:
	cmpq	%r12, %r15
	movq	-80(%rbp), %r15                 ## 8-byte Reload
	movq	-88(%rbp), %rdx                 ## 8-byte Reload
	jne	LBB5_21
LBB5_17:
	subq	%rdx, %r14
	testq	%r14, %r14
	jle	LBB5_19
## %bb.18:
	movq	(%rbx), %rax
	movq	%rbx, %rdi
	movq	%rdx, %rsi
	movq	%r14, %rdx
	callq	*96(%rax)
	cmpq	%r14, %rax
	jne	LBB5_21
LBB5_19:
	movq	$0, 24(%r15)
	jmp	LBB5_22
LBB5_21:
	xorl	%ebx, %ebx
LBB5_22:
	movq	%rbx, %rax
	addq	$56, %rsp
	popq	%rbx
	popq	%r12
	popq	%r13
	popq	%r14
	popq	%r15
	popq	%rbp
	retq
LBB5_23:
Ltmp99:
	movq	%rax, %rbx
	testb	$1, -64(%rbp)
	je	LBB5_25
## %bb.24:
	movq	-48(%rbp), %rdi
	callq	__ZdlPv
LBB5_25:
	movq	%rbx, %rdi
	callq	__Unwind_Resume
Lfunc_end3:
	.cfi_endproc
	.section	__TEXT,__gcc_except_tab
	.p2align	2, 0x0
GCC_except_table5:
Lexception3:
	.byte	255                             ## @LPStart Encoding = omit
	.byte	255                             ## @TType Encoding = omit
	.byte	1                               ## Call site Encoding = uleb128
	.uleb128 Lcst_end3-Lcst_begin3
Lcst_begin3:
	.uleb128 Lfunc_begin3-Lfunc_begin3      ## >> Call Site 1 <<
	.uleb128 Ltmp97-Lfunc_begin3            ##   Call between Lfunc_begin3 and Ltmp97
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp97-Lfunc_begin3            ## >> Call Site 2 <<
	.uleb128 Ltmp98-Ltmp97                  ##   Call between Ltmp97 and Ltmp98
	.uleb128 Ltmp99-Lfunc_begin3            ##     jumps to Ltmp99
	.byte	0                               ##   On action: cleanup
	.uleb128 Ltmp98-Lfunc_begin3            ## >> Call Site 3 <<
	.uleb128 Lfunc_end3-Ltmp98              ##   Call between Ltmp98 and Lfunc_end3
	.byte	0                               ##     has no landing pad
	.byte	0                               ##   On action: cleanup
Lcst_end3:
	.p2align	2, 0x0
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"L"

L_.str.1:                               ## @.str.1
	.asciz	"YES"

L_.str.2:                               ## @.str.2
	.asciz	"NO"

.subsections_via_symbols
