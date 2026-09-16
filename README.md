# Scrap Template Examples

This repository contains example templates that demonstrate the scrap template system.

## Available Templates

### minimal-app
A minimal C++ application template that generates:
- `scrap.toml` with basic application configuration
- `src/main.cpp` with simple Hello World program
- `tests/main_test.cpp` with basic test setup

### minimal-lib
A minimal C++ library template that generates:
- `scrap.toml` with basic library configuration
- `include/{{name}}/{{name}}.h` with public API
- `src/{{name}}.cpp` with implementation
- `tests/{{name}}_test.cpp` with unit tests
- `examples/usage.cpp` with usage example

## Using These Templates

`scrap` cannot use these templates yet. `scrap new` creates a project from a template built into the tool itself, and takes no option that points at a template outside it. Until a way to distribute and select templates exists, the directories here describe the intended structure rather than feed a command.

## Template Features Demonstrated

### Variable Substitution
- `{{name}}` - Project name
- `{{version}}` - Project version
- `{{author}}` - Author name
- `{{year}}` - Current year
- `{{namespace}}` - Custom variable with default

### Variable Transforms
- `{{namespace|snake_case}}` - Convert to snake_case
- Other transforms: `PascalCase`, `camelCase`, `UPPER_CASE`, `kebab-case`

### Template Metadata
Each template includes a `template.toml` file with:
- Basic metadata (name, version, description)
- Variable definitions with prompts and defaults
- Requirements and compatibility information
- Default dependencies

### File Structure
Templates can include:
- Files with variable placeholders in names: `{{name}}.cpp`
- Directory names with placeholders: `include/{{name}}/`
- Content with variable substitution
- Conditional sections (future feature)

## Creating Custom Templates

1. Create a directory with your template name
2. Add `template.toml` with metadata
3. Add template files with placeholders

For complete details about the template system, see the documentation in the main [scrap repository](https://github.com/skipbit/scrap).
