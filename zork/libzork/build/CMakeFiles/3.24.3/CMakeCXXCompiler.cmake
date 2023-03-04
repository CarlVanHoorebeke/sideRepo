set(CMAKE_CXX_COMPILER "/nix/store/1y8i61anhs9hh1g5x3zw2fvdbivwixzg-gcc-wrapper-11.3.0/bin/g++")
set(CMAKE_CXX_COMPILER_ARG1 "")
set(CMAKE_CXX_COMPILER_ID "GNU")
set(CMAKE_CXX_COMPILER_VERSION "11.3.0")
set(CMAKE_CXX_COMPILER_VERSION_INTERNAL "")
set(CMAKE_CXX_COMPILER_WRAPPER "")
set(CMAKE_CXX_STANDARD_COMPUTED_DEFAULT "17")
set(CMAKE_CXX_EXTENSIONS_COMPUTED_DEFAULT "ON")
set(CMAKE_CXX_COMPILE_FEATURES "cxx_std_98;cxx_template_template_parameters;cxx_std_11;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_auto_type;cxx_constexpr;cxx_decltype;cxx_decltype_incomplete_return_types;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variadic_macros;cxx_variadic_templates;cxx_std_14;cxx_aggregate_default_initializers;cxx_attribute_deprecated;cxx_binary_literals;cxx_contextual_conversions;cxx_decltype_auto;cxx_digit_separators;cxx_generic_lambdas;cxx_lambda_init_captures;cxx_relaxed_constexpr;cxx_return_type_deduction;cxx_variable_templates;cxx_std_17;cxx_std_20;cxx_std_23")
set(CMAKE_CXX98_COMPILE_FEATURES "cxx_std_98;cxx_template_template_parameters")
set(CMAKE_CXX11_COMPILE_FEATURES "cxx_std_11;cxx_alias_templates;cxx_alignas;cxx_alignof;cxx_attributes;cxx_auto_type;cxx_constexpr;cxx_decltype;cxx_decltype_incomplete_return_types;cxx_default_function_template_args;cxx_defaulted_functions;cxx_defaulted_move_initializers;cxx_delegating_constructors;cxx_deleted_functions;cxx_enum_forward_declarations;cxx_explicit_conversions;cxx_extended_friend_declarations;cxx_extern_templates;cxx_final;cxx_func_identifier;cxx_generalized_initializers;cxx_inheriting_constructors;cxx_inline_namespaces;cxx_lambdas;cxx_local_type_template_args;cxx_long_long_type;cxx_noexcept;cxx_nonstatic_member_init;cxx_nullptr;cxx_override;cxx_range_for;cxx_raw_string_literals;cxx_reference_qualified_functions;cxx_right_angle_brackets;cxx_rvalue_references;cxx_sizeof_member;cxx_static_assert;cxx_strong_enums;cxx_thread_local;cxx_trailing_return_types;cxx_unicode_literals;cxx_uniform_initialization;cxx_unrestricted_unions;cxx_user_literals;cxx_variadic_macros;cxx_variadic_templates")
set(CMAKE_CXX14_COMPILE_FEATURES "cxx_std_14;cxx_aggregate_default_initializers;cxx_attribute_deprecated;cxx_binary_literals;cxx_contextual_conversions;cxx_decltype_auto;cxx_digit_separators;cxx_generic_lambdas;cxx_lambda_init_captures;cxx_relaxed_constexpr;cxx_return_type_deduction;cxx_variable_templates")
set(CMAKE_CXX17_COMPILE_FEATURES "cxx_std_17")
set(CMAKE_CXX20_COMPILE_FEATURES "cxx_std_20")
set(CMAKE_CXX23_COMPILE_FEATURES "cxx_std_23")

set(CMAKE_CXX_PLATFORM_ID "Linux")
set(CMAKE_CXX_SIMULATE_ID "")
set(CMAKE_CXX_COMPILER_FRONTEND_VARIANT "")
set(CMAKE_CXX_SIMULATE_VERSION "")




set(CMAKE_AR "/nix/store/1y8i61anhs9hh1g5x3zw2fvdbivwixzg-gcc-wrapper-11.3.0/bin/ar")
set(CMAKE_CXX_COMPILER_AR "/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/bin/gcc-ar")
set(CMAKE_RANLIB "/nix/store/1y8i61anhs9hh1g5x3zw2fvdbivwixzg-gcc-wrapper-11.3.0/bin/ranlib")
set(CMAKE_CXX_COMPILER_RANLIB "/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/bin/gcc-ranlib")
set(CMAKE_LINKER "/nix/store/1y8i61anhs9hh1g5x3zw2fvdbivwixzg-gcc-wrapper-11.3.0/bin/ld")
set(CMAKE_MT "")
set(CMAKE_COMPILER_IS_GNUCXX 1)
set(CMAKE_CXX_COMPILER_LOADED 1)
set(CMAKE_CXX_COMPILER_WORKS TRUE)
set(CMAKE_CXX_ABI_COMPILED TRUE)

set(CMAKE_CXX_COMPILER_ENV_VAR "CXX")

set(CMAKE_CXX_COMPILER_ID_RUN 1)
set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS C;M;c++;cc;cpp;cxx;m;mm;mpp;CPP;ixx;cppm)
set(CMAKE_CXX_IGNORE_EXTENSIONS inl;h;hpp;HPP;H;o;O;obj;OBJ;def;DEF;rc;RC)

foreach (lang C OBJC OBJCXX)
  if (CMAKE_${lang}_COMPILER_ID_RUN)
    foreach(extension IN LISTS CMAKE_${lang}_SOURCE_FILE_EXTENSIONS)
      list(REMOVE_ITEM CMAKE_CXX_SOURCE_FILE_EXTENSIONS ${extension})
    endforeach()
  endif()
endforeach()

set(CMAKE_CXX_LINKER_PREFERENCE 30)
set(CMAKE_CXX_LINKER_PREFERENCE_PROPAGATES 1)

# Save compiler ABI information.
set(CMAKE_CXX_SIZEOF_DATA_PTR "8")
set(CMAKE_CXX_COMPILER_ABI "ELF")
set(CMAKE_CXX_BYTE_ORDER "LITTLE_ENDIAN")
set(CMAKE_CXX_LIBRARY_ARCHITECTURE "")

if(CMAKE_CXX_SIZEOF_DATA_PTR)
  set(CMAKE_SIZEOF_VOID_P "${CMAKE_CXX_SIZEOF_DATA_PTR}")
endif()

if(CMAKE_CXX_COMPILER_ABI)
  set(CMAKE_INTERNAL_PLATFORM_ABI "${CMAKE_CXX_COMPILER_ABI}")
endif()

if(CMAKE_CXX_LIBRARY_ARCHITECTURE)
  set(CMAKE_LIBRARY_ARCHITECTURE "")
endif()

set(CMAKE_CXX_CL_SHOWINCLUDES_PREFIX "")
if(CMAKE_CXX_CL_SHOWINCLUDES_PREFIX)
  set(CMAKE_CL_SHOWINCLUDES_PREFIX "${CMAKE_CXX_CL_SHOWINCLUDES_PREFIX}")
endif()





set(CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES "/nix/store/82lvicb7p56zz96k2vaj3yahz7zq2i62-yaml-cpp-0.7.0/include;/nix/store/9ym9cbnrmz1cx5anr7367v46d0rqsxr3-libxml++-2.40.1/include;/nix/store/12i5vks32j41mgs8iga7vlfxbz5qzm81-libxml2-2.10.3-dev/include;/nix/store/18a62mmf46dsh7qjwzk9vpdzqyrg9hcz-zlib-1.2.13-dev/include;/nix/store/fcsfqnqiykascpdp99w75m8092f7gq46-glibmm-2.66.5-dev/include;/nix/store/24m8ipf4xxb9jwymppgzj9ksgaknkz4n-glib-2.74.3-dev/include;/nix/store/sp24041nvd97pdi0pf5rsjc8b0ghvbrf-libffi-3.4.4-dev/include;/nix/store/b7fmxwwy243r6iakqcpr2kxqh8aslnxd-gettext-0.21/include;/nix/store/r01gk2r6gab8wyy4r5k2raccy636iqb4-glibc-iconv-2.35/include;/nix/store/60il1lib9kj4n1r7shqlv5wffgqpms40-libsigc++-2.10.8/include;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/include/c++/11.3.0;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/include/c++/11.3.0/x86_64-unknown-linux-gnu;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/include/c++/11.3.0/backward;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/lib/gcc/x86_64-unknown-linux-gnu/11.3.0/include;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/include;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/lib/gcc/x86_64-unknown-linux-gnu/11.3.0/include-fixed;/nix/store/nasgvbblxi25r6y1s82il4m0m4ghib68-glibc-2.35-224-dev/include")
set(CMAKE_CXX_IMPLICIT_LINK_LIBRARIES "stdc++;m;gcc_s;gcc;c;gcc_s;gcc")
set(CMAKE_CXX_IMPLICIT_LINK_DIRECTORIES "/nix/store/82lvicb7p56zz96k2vaj3yahz7zq2i62-yaml-cpp-0.7.0/lib;/nix/store/9ym9cbnrmz1cx5anr7367v46d0rqsxr3-libxml++-2.40.1/lib;/nix/store/nglx459d8q4p1f1fcn1dv314hldh5h78-zlib-1.2.13/lib;/nix/store/6pcf2hzn0d4kjddj8v2rzkpr99wwnfx9-libxml2-2.10.3/lib;/nix/store/jcvxqpa1fiy6m8hxxg8h4a51kids1wcq-libffi-3.4.4/lib;/nix/store/b7fmxwwy243r6iakqcpr2kxqh8aslnxd-gettext-0.21/lib;/nix/store/0mcsib9r75kzr8lnwrfi3wm0jbs4751l-glib-2.74.3/lib;/nix/store/60il1lib9kj4n1r7shqlv5wffgqpms40-libsigc++-2.10.8/lib;/nix/store/9424k0rcnq9x8k8y4xja3ild0fdfj7iz-glibmm-2.66.5/lib;/nix/store/c35hf8g5b9vksadym9dbjrd6p2y11m8h-glibc-2.35-224/lib;/nix/store/qbgfsaviwqi2p6jr7an1g2754sv3xqhn-gcc-11.3.0-lib/lib;/nix/store/1y8i61anhs9hh1g5x3zw2fvdbivwixzg-gcc-wrapper-11.3.0/bin;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/lib/gcc/x86_64-unknown-linux-gnu/11.3.0;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/lib64;/nix/store/v1nxrwb4ls09sbbrwlkgxs7dlw8paksh-gcc-11.3.0/lib")
set(CMAKE_CXX_IMPLICIT_LINK_FRAMEWORK_DIRECTORIES "")
