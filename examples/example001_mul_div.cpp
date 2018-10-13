#include <cstdint>
#include <iomanip>
#include <iostream>

#include <wide_integer/generic_template_uintwide_t.h>

int main()
{
  using wide_integer_type = wide_integer::generic_template::uint256_t;

  const wide_integer_type a("0xF4DF741DE58BCB2F37F18372026EF9CBCFC456CB80AF54D53BDEED78410065DE");
  const wide_integer_type b("0x166D63E0202B3D90ECCEAA046341AB504658F55B974A7FD63733ECF89DD0DF75");

  const wide_integer_type c = (a * b);
  const wide_integer_type d = (a / b);

  const bool result_is_ok = (   (c == "0xE491A360C57EB4306C61F9A04F7F7D99BE3676AAD2D71C5592D5AE70F84AF076")
                             && (d == "0xA"));

  std::cout << std::hex << std::uppercase << c << std::endl;
  std::cout << std::hex << std::uppercase << d << std::endl;

  std::cout << "result_is_ok: " << std::boolalpha << result_is_ok << std::endl;

  return result_is_ok;
}
