#ifndef SOLANA_SDK_SPL_TOKEN_2022
#define SOLANA_SDK_SPL_TOKEN_2022

#include <godot_cpp/classes/node.hpp>
#include <instruction.hpp>
#include <spl_token.hpp>

namespace godot{

class TokenProgram2022 : public TokenProgram{
    GDCLASS(TokenProgram2022, Node)
private:

protected:
    static void _bind_methods();

public:

    static const std::string ID;
    static Variant get_pid();

    static Variant initialize_metadata(const Variant& payer, const Variant& mint_keypair);

        static Variant initialize_mint(const Variant& mint_pubkey, const Variant& mint_authority, const Variant& freeze_authority = nullptr, const uint32_t decimals = 9);
        static Variant initialize_account(const Variant& account_pubkey, const Variant& mint_pubkey, const Variant& owner_pubkey);

        static Variant mint_to(const Variant& mint_pubkey, const Variant& account_pubkey, const Variant& owner_pubkey, const Variant& mint_authority, uint64_t amount);
        static Variant transfer_checked(const Variant& source_pubkey, const Variant& mint_pubkey, const Variant& destination_pubkey, const Variant& source_authority, uint64_t amount, uint32_t decimals);
        static Variant freeze_account(const Variant& account_pubkey, const Variant& mint_pubkey, const Variant& owner_pubkey, const Variant& freeze_authority); 

};

}

#endif