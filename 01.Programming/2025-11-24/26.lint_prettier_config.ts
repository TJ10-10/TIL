// 26.lint_prettier_config/.eslintrc.json
{
  "parser": "@typescript-eslint/parser",
  "extends": [
    "eslint:recommended",
    "plugin:@typescript-eslint/recommended",
    "prettier"
  ],
  "plugins": ["@typescript-eslint"],
  "rules": {
    "@typescript-eslint/no-explicit-any": "warn",
    "semi": ["error", "always"]
  }
}
----------------------------------------------------------

// 26.lint_prettier_config/.prettierrc
{
  "singleQuote": true,
  "semi": true,
  "trailingComma": "es5"
}

