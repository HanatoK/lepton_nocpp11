#include <iostream>
#include "Lepton.h"
#include <string>
#include <vector>

std::vector<Lepton::CompiledExpression *> value_evaluators;

void test1() {
  std::vector<Lepton::ParsedExpression> pexprs;
  Lepton::ParsedExpression pexpr;
  pexpr = Lepton::Parser::parse("0.5 * x");
  pexprs.push_back(pexpr);
  value_evaluators.push_back(new Lepton::CompiledExpression(pexpr.createCompiledExpression()));
}

void test2() {
  double& ref_x = value_evaluators[0]->getVariableReference("x");
  ref_x = 0.6;
  std::cout << value_evaluators[0]->evaluate() << std::endl;
}

int main() {
  test1();
  test2();
  return 0;
}
