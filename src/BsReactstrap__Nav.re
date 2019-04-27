[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tabs: bool=?,
    ~pills: bool=?,
    ~vertical: 'a=?,
    ~horizontal: string=?,
    ~justified: bool=?,
    ~fill: bool=?,
    ~navbar: bool=?,
    ~card: bool=?,
    ~tag: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  React.element =
  "Nav";